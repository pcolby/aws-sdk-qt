// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVATEDRULESINRULEGROUPRESPONSE_H
#define QTAWS_LISTACTIVATEDRULESINRULEGROUPRESPONSE_H

#include "wafresponse.h"
#include "listactivatedrulesinrulegrouprequest.h"

namespace QtAws {
namespace Waf {

class ListActivatedRulesInRuleGroupResponsePrivate;

class QTAWSWAF_EXPORT ListActivatedRulesInRuleGroupResponse : public WafResponse {
    Q_OBJECT

public:
    ListActivatedRulesInRuleGroupResponse(const ListActivatedRulesInRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListActivatedRulesInRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActivatedRulesInRuleGroupResponse)
    Q_DISABLE_COPY(ListActivatedRulesInRuleGroupResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
