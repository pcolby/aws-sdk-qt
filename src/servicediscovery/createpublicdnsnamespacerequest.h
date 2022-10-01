// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICDNSNAMESPACEREQUEST_H
#define QTAWS_CREATEPUBLICDNSNAMESPACEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePublicDnsNamespaceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT CreatePublicDnsNamespaceRequest : public ServiceDiscoveryRequest {

public:
    CreatePublicDnsNamespaceRequest(const CreatePublicDnsNamespaceRequest &other);
    CreatePublicDnsNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePublicDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
