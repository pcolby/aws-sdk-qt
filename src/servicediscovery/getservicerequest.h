// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEREQUEST_H
#define QTAWS_GETSERVICEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetServiceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT GetServiceRequest : public ServiceDiscoveryRequest {

public:
    GetServiceRequest(const GetServiceRequest &other);
    GetServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
