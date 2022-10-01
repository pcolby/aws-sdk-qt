// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUBSCRIBEDRULEGROUPSREQUEST_H
#define QTAWS_LISTSUBSCRIBEDRULEGROUPSREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class ListSubscribedRuleGroupsRequestPrivate;

class QTAWSWAF_EXPORT ListSubscribedRuleGroupsRequest : public WafRequest {

public:
    ListSubscribedRuleGroupsRequest(const ListSubscribedRuleGroupsRequest &other);
    ListSubscribedRuleGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSubscribedRuleGroupsRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
