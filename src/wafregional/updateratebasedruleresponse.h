// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERATEBASEDRULERESPONSE_H
#define QTAWS_UPDATERATEBASEDRULERESPONSE_H

#include "wafregionalresponse.h"
#include "updateratebasedrulerequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRateBasedRuleResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateRateBasedRuleResponse : public WafRegionalResponse {
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

} // namespace WafRegional
} // namespace QtAws

#endif
