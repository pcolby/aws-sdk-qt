// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRATEBASEDRULESRESPONSE_H
#define QTAWS_LISTRATEBASEDRULESRESPONSE_H

#include "wafregionalresponse.h"
#include "listratebasedrulesrequest.h"

namespace QtAws {
namespace WafRegional {

class ListRateBasedRulesResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT ListRateBasedRulesResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    ListRateBasedRulesResponse(const ListRateBasedRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListRateBasedRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRateBasedRulesResponse)
    Q_DISABLE_COPY(ListRateBasedRulesResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
