// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEREQUEST_H
#define QTAWS_UPDATESERVICEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateServiceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdateServiceRequest : public ServiceDiscoveryRequest {

public:
    UpdateServiceRequest(const UpdateServiceRequest &other);
    UpdateServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateServiceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
