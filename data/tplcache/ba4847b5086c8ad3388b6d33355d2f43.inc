<div class="casei">
      <div class="more_i"> <span>{dede:field name='typename'/}</span><a  href="list.php?tid={dede:field name='id'/}">更多</a></div>
      <div class="case_c">
        <ul>
          {dede:arclist row='2' orderby='id'}
          <li>
            <div class="case_c_pic"> <a href="view.php?aid=[field:id/]" title="[field:title/]"> <img src="[field:picname/]" alt="[field:title/]"> </a> </div>
            <div class="case_c_content">
              <h2>[field:title/]</h2>
              <span>[field:description function="cn_substr(@me,100)"/]...</span> </div>
          </li>
          {/dede:arclist}
        </ul>
      </div>
    </div>