// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESQLINJECTIONMATCHSETRESPONSE_P_H
#define QTAWS_CREATESQLINJECTIONMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class CreateSqlInjectionMatchSetResponse;

class CreateSqlInjectionMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit CreateSqlInjectionMatchSetResponsePrivate(CreateSqlInjectionMatchSetResponse * const q);

    void parseCreateSqlInjectionMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(CreateSqlInjectionMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
