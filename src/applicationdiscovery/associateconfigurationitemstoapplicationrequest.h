// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONFIGURATIONITEMSTOAPPLICATIONREQUEST_H
#define QTAWS_ASSOCIATECONFIGURATIONITEMSTOAPPLICATIONREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class AssociateConfigurationItemsToApplicationRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT AssociateConfigurationItemsToApplicationRequest : public ApplicationDiscoveryRequest {

public:
    AssociateConfigurationItemsToApplicationRequest(const AssociateConfigurationItemsToApplicationRequest &other);
    AssociateConfigurationItemsToApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateConfigurationItemsToApplicationRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
