// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERATEBASEDRULERESPONSE_H
#define QTAWS_UPDATERATEBASEDRULERESPONSE_H

#include "wafresponse.h"
#include "updateratebasedrulerequest.h"

namespace QtAws {
namespace Waf {

class UpdateRateBasedRuleResponsePrivate;

class QTAWSWAF_EXPORT UpdateRateBasedRuleResponse : public WafResponse {
    Q_OBJECT

public:
    UpdateRateBasedRuleResponse(const UpdateRateBasedRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRateBasedRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRateBasedRuleResponse)
    Q_DISABLE_COPY(UpdateRateBasedRuleResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
