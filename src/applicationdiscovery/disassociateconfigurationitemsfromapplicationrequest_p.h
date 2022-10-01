// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONFIGURATIONITEMSFROMAPPLICATIONREQUEST_P_H
#define QTAWS_DISASSOCIATECONFIGURATIONITEMSFROMAPPLICATIONREQUEST_P_H

#include "applicationdiscoveryrequest_p.h"
#include "disassociateconfigurationitemsfromapplicationrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DisassociateConfigurationItemsFromApplicationRequest;

class DisassociateConfigurationItemsFromApplicationRequestPrivate : public ApplicationDiscoveryRequestPrivate {

public:
    DisassociateConfigurationItemsFromApplicationRequestPrivate(const ApplicationDiscoveryRequest::Action action,
                                   DisassociateConfigurationItemsFromApplicationRequest * const q);
    DisassociateConfigurationItemsFromApplicationRequestPrivate(const DisassociateConfigurationItemsFromApplicationRequestPrivate &other,
                                   DisassociateConfigurationItemsFromApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateConfigurationItemsFromApplicationRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
