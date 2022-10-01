// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRIVATEDNSNAMESPACERESPONSE_H
#define QTAWS_CREATEPRIVATEDNSNAMESPACERESPONSE_H

#include "servicediscoveryresponse.h"
#include "createprivatednsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreatePrivateDnsNamespaceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT CreatePrivateDnsNamespaceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    CreatePrivateDnsNamespaceResponse(const CreatePrivateDnsNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePrivateDnsNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePrivateDnsNamespaceResponse)
    Q_DISABLE_COPY(CreatePrivateDnsNamespaceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
