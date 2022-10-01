// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRATEBASEDRULESRESPONSE_H
#define QTAWS_LISTRATEBASEDRULESRESPONSE_H

#include "wafresponse.h"
#include "listratebasedrulesrequest.h"

namespace QtAws {
namespace Waf {

class ListRateBasedRulesResponsePrivate;

class QTAWSWAF_EXPORT ListRateBasedRulesResponse : public WafResponse {
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

} // namespace Waf
} // namespace QtAws

#endif
