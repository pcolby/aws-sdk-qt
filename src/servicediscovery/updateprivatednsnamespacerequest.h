// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIVATEDNSNAMESPACEREQUEST_H
#define QTAWS_UPDATEPRIVATEDNSNAMESPACEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdatePrivateDnsNamespaceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdatePrivateDnsNamespaceRequest : public ServiceDiscoveryRequest {

public:
    UpdatePrivateDnsNamespaceRequest(const UpdatePrivateDnsNamespaceRequest &other);
    UpdatePrivateDnsNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePrivateDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
