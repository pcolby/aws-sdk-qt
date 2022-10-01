// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIVATEDRULESINRULEGROUPREQUEST_H
#define QTAWS_LISTACTIVATEDRULESINRULEGROUPREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListActivatedRulesInRuleGroupRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListActivatedRulesInRuleGroupRequest : public WafRegionalRequest {

public:
    ListActivatedRulesInRuleGroupRequest(const ListActivatedRulesInRuleGroupRequest &other);
    ListActivatedRulesInRuleGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListActivatedRulesInRuleGroupRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
