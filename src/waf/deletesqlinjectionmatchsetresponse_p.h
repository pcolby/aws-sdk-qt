// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESQLINJECTIONMATCHSETRESPONSE_P_H
#define QTAWS_DELETESQLINJECTIONMATCHSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeleteSqlInjectionMatchSetResponse;

class DeleteSqlInjectionMatchSetResponsePrivate : public WafResponsePrivate {

public:

    explicit DeleteSqlInjectionMatchSetResponsePrivate(DeleteSqlInjectionMatchSetResponse * const q);

    void parseDeleteSqlInjectionMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(DeleteSqlInjectionMatchSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
