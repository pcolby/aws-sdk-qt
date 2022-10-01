// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNAMESPACEREQUEST_H
#define QTAWS_GETNAMESPACEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetNamespaceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT GetNamespaceRequest : public ServiceDiscoveryRequest {

public:
    GetNamespaceRequest(const GetNamespaceRequest &other);
    GetNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
