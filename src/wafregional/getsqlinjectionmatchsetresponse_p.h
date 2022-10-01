// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSQLINJECTIONMATCHSETRESPONSE_P_H
#define QTAWS_GETSQLINJECTIONMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetSqlInjectionMatchSetResponse;

class GetSqlInjectionMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetSqlInjectionMatchSetResponsePrivate(GetSqlInjectionMatchSetResponse * const q);

    void parseGetSqlInjectionMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(GetSqlInjectionMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
