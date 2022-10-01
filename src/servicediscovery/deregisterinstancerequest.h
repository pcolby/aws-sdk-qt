// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCEREQUEST_H
#define QTAWS_DEREGISTERINSTANCEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class DeregisterInstanceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT DeregisterInstanceRequest : public ServiceDiscoveryRequest {

public:
    DeregisterInstanceRequest(const DeregisterInstanceRequest &other);
    DeregisterInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterInstanceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
