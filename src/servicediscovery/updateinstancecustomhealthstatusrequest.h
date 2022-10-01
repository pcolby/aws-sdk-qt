// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCECUSTOMHEALTHSTATUSREQUEST_H
#define QTAWS_UPDATEINSTANCECUSTOMHEALTHSTATUSREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateInstanceCustomHealthStatusRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdateInstanceCustomHealthStatusRequest : public ServiceDiscoveryRequest {

public:
    UpdateInstanceCustomHealthStatusRequest(const UpdateInstanceCustomHealthStatusRequest &other);
    UpdateInstanceCustomHealthStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceCustomHealthStatusRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
