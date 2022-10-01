// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICDNSNAMESPACEREQUEST_H
#define QTAWS_UPDATEPUBLICDNSNAMESPACEREQUEST_H

#include "servicediscoveryrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdatePublicDnsNamespaceRequestPrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdatePublicDnsNamespaceRequest : public ServiceDiscoveryRequest {

public:
    UpdatePublicDnsNamespaceRequest(const UpdatePublicDnsNamespaceRequest &other);
    UpdatePublicDnsNamespaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePublicDnsNamespaceRequest)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
