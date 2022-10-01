// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICDNSNAMESPACERESPONSE_H
#define QTAWS_CREATEPUBLICDNSNAMESPACERESPONSE_H

#include "servicediscoveryresponse.h"
#include "createpublicdnsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePublicDnsNamespaceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT CreatePublicDnsNamespaceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    CreatePublicDnsNamespaceResponse(const CreatePublicDnsNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePublicDnsNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePublicDnsNamespaceResponse)
    Q_DISABLE_COPY(CreatePublicDnsNamespaceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
