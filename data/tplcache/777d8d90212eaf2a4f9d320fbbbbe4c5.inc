<div class="about_i">
      <div class="more_i"> <span>{dede:field name='typename'/}</span><a  href="list.php?tid={dede:field name='id'/}">更多</a></div>
      <div class="clear"></div>
      <div class="about_i_c"> {dede:sql sql='Select content from dede_arctype where id=1'}[field:content function='cn_substr(html2text(@me),260)'/] {/dede:sql} ...</div>
      <div class="clear"></div>
    </div>