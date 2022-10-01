// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHTTPNAMESPACEREQUEST_H
#define QTAWS_UPDATEHTTPNAMESPACEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateHttpNamespaceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdateHttpNamespaceRequest : public ServiceDiscoveryRequest {

public:
    UpdateHttpNamespaceRequest(const UpdateHttpNamespaceRequest &other);
    UpdateHttpNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHttpNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
