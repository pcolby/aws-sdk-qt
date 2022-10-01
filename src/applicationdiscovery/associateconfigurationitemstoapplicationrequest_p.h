// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONFIGURATIONITEMSTOAPPLICATIONREQUEST_P_H
#define QTAWS_ASSOCIATECONFIGURATIONITEMSTOAPPLICATIONREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "associateconfigurationitemstoapplicationrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class AssociateConfigurationItemsToApplicationRequest;

class AssociateConfigurationItemsToApplicationRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    AssociateConfigurationItemsToApplicationRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   AssociateConfigurationItemsToApplicationRequest * const q);
    AssociateConfigurationItemsToApplicationRequestPrivate(const AssociateConfigurationItemsToApplicationRequestPrivate &other,
                                   AssociateConfigurationItemsToApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateConfigurationItemsToApplicationRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
