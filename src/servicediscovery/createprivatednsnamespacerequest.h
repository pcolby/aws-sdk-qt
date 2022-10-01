// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRIVATEDNSNAMESPACEREQUEST_H
#define QTAWS_CREATEPRIVATEDNSNAMESPACEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePrivateDnsNamespaceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT CreatePrivateDnsNamespaceRequest : public ServiceDiscoveryRequest {

public:
    CreatePrivateDnsNamespaceRequest(const CreatePrivateDnsNamespaceRequest &other);
    CreatePrivateDnsNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePrivateDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
