// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIREWALLMANAGERRULEGROUPSREQUEST_H
#define QTAWS_DELETEFIREWALLMANAGERRULEGROUPSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class DeleteFirewallManagerRuleGroupsRequestPrivate;

class QTAWSWAFV2_EXPORT DeleteFirewallManagerRuleGroupsRequest : public Wafv2Request {

public:
    DeleteFirewallManagerRuleGroupsRequest(const DeleteFirewallManagerRuleGroupsRequest &other);
    DeleteFirewallManagerRuleGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFirewallManagerRuleGroupsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
