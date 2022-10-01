// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERATEBASEDRULERESPONSE_H
#define QTAWS_DELETERATEBASEDRULERESPONSE_H

#include "wafregionalresponse.h"
#include "deleteratebasedrulerequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRateBasedRuleResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteRateBasedRuleResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    DeleteRateBasedRuleResponse(const DeleteRateBasedRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRateBasedRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRateBasedRuleResponse)
    Q_DISABLE_COPY(DeleteRateBasedRuleResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
