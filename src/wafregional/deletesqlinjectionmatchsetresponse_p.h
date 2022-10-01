// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESQLINJECTIONMATCHSETRESPONSE_P_H
#define QTAWS_DELETESQLINJECTIONMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class DeleteSqlInjectionMatchSetResponse;

class DeleteSqlInjectionMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit DeleteSqlInjectionMatchSetResponsePrivate(DeleteSqlInjectionMatchSetResponse * const q);

    void parseDeleteSqlInjectionMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(DeleteSqlInjectionMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
