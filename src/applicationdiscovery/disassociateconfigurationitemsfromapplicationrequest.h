// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONFIGURATIONITEMSFROMAPPLICATIONREQUEST_H
#define QTAWS_DISASSOCIATECONFIGURATIONITEMSFROMAPPLICATIONREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DisassociateConfigurationItemsFromApplicationRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DisassociateConfigurationItemsFromApplicationRequest : public ApplicationDiscoveryRequest {

public:
    DisassociateConfigurationItemsFromApplicationRequest(const DisassociateConfigurationItemsFromApplicationRequest &other);
    DisassociateConfigurationItemsFromApplicationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConfigurationItemsFromApplicationRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
