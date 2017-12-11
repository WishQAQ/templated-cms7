<div class="honor_i">
      <div class="more_i"> <span>{dede:field name='typename'/}</span><a  href="list.php?tid={dede:field name='id'/}">更多</a></div>
      <div class="clear"></div>
      <div class="honor_i_c">
        <ul>
          {dede:arclist row='4' orderby='id' titlelen='32'}
          <li><a href="view.php?aid=[field:id/]"> <img src="[field:picname/]" alt="[field:title/]" width="240px" height="159px"> <span class="sp1">[field:title/]</span> </a></li>
          {/dede:arclist}
        </ul>
        <div class="c"></div>
      </div>
    </div>