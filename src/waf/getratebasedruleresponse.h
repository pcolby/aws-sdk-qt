// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRATEBASEDRULERESPONSE_H
#define QTAWS_GETRATEBASEDRULERESPONSE_H

#include "wafresponse.h"
#include "getratebasedrulerequest.h"

namespace QtAws {
namespace Waf {

class GetRateBasedRuleResponsePrivate;

class QTAWSWAF_EXPORT GetRateBasedRuleResponse : public WafResponse {
    Q_OBJECT

public:
    GetRateBasedRuleResponse(const GetRateBasedRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRateBasedRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRateBasedRuleResponse)
    Q_DISABLE_COPY(GetRateBasedRuleResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
