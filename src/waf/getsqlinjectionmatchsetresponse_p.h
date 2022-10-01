// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSQLINJECTIONMATCHSETRESPONSE_P_H
#define QTAWS_GETSQLINJECTIONMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class GetSqlInjectionMatchSetResponse;

class GetSqlInjectionMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit GetSqlInjectionMatchSetResponsePrivate(GetSqlInjectionMatchSetResponse * const q);

    void parseGetSqlInjectionMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(GetSqlInjectionMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
