// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHTTPNAMESPACEREQUEST_H
#define QTAWS_CREATEHTTPNAMESPACEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreateHttpNamespaceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT CreateHttpNamespaceRequest : public ServiceDiscoveryRequest {

public:
    CreateHttpNamespaceRequest(const CreateHttpNamespaceRequest &other);
    CreateHttpNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHttpNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
