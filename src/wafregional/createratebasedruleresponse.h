// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERATEBASEDRULERESPONSE_H
#define QTAWS_CREATERATEBASEDRULERESPONSE_H

#include "wafregionalresponse.h"
#include "createratebasedrulerequest.h"

namespace QtAws {
namespace WafRegional {

class CreateRateBasedRuleResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT CreateRateBasedRuleResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    CreateRateBasedRuleResponse(const CreateRateBasedRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRateBasedRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRateBasedRuleResponse)
    Q_DISABLE_COPY(CreateRateBasedRuleResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
