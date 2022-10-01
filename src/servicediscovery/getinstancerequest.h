// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEREQUEST_H
#define QTAWS_GETINSTANCEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetInstanceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT GetInstanceRequest : public ServiceDiscoveryRequest {

public:
    GetInstanceRequest(const GetInstanceRequest &other);
    GetInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstanceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
