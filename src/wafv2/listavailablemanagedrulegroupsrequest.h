// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEDRULEGROUPSREQUEST_H
#define QTAWS_LISTAVAILABLEMANAGEDRULEGROUPSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class ListAvailableManagedRuleGroupsRequestPrivate;

class QTAWSWAFV2_EXPORT ListAvailableManagedRuleGroupsRequest : public Wafv2Request {

public:
    ListAvailableManagedRuleGroupsRequest(const ListAvailableManagedRuleGroupsRequest &other);
    ListAvailableManagedRuleGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableManagedRuleGroupsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
