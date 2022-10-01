// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESQLINJECTIONMATCHSETRESPONSE_P_H
#define QTAWS_UPDATESQLINJECTIONMATCHSETRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class UpdateSqlInjectionMatchSetResponse;

class UpdateSqlInjectionMatchSetResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit UpdateSqlInjectionMatchSetResponsePrivate(UpdateSqlInjectionMatchSetResponse * const q);

    void parseUpdateSqlInjectionMatchSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSqlInjectionMatchSetResponse)
    Q_DISABLE_COPY(UpdateSqlInjectionMatchSetResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
