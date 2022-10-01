// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECROSSACCOUNTACCESSROLEREQUEST_P_H
#define QTAWS_DESCRIBECROSSACCOUNTACCESSROLEREQUEST_P_H

#include "inspectorrequest_p.h"
#include "describecrossaccountaccessrolerequest.h"

namespace QtAws {
namespace Inspector {

class DescribeCrossAccountAccessRoleRequest;

class DescribeCrossAccountAccessRoleRequestPrivate : public InspectorRequestPrivate {

public:
    DescribeCrossAccountAccessRoleRequestPrivate(const InspectorRequest::Action action,
                                   DescribeCrossAccountAccessRoleRequest * const q);
    DescribeCrossAccountAccessRoleRequestPrivate(const DescribeCrossAccountAccessRoleRequestPrivate &other,
                                   DescribeCrossAccountAccessRoleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCrossAccountAccessRoleRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
