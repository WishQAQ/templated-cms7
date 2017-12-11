<div class="case_i">
      <div class="more_i"><span>{dede:field name='typename'/}</span><a  href="list.php?tid={dede:field name='id'/}">更多</a></div>
      <div class="clear"></div>
      <div class="clear"></div>
      <div class="case_i_c">
        <ul>
          {dede:arclist row='3' orderby='id'}
          <li> <a href="view.php?aid=[field:id/]">
            <h2>[field:title/]</h2>
            </a> </li>
          {/dede:arclist}
        </ul>
      </div>
      <div class="clear"></div>
    </div>