// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIVATEDNSNAMESPACERESPONSE_H
#define QTAWS_UPDATEPRIVATEDNSNAMESPACERESPONSE_H

#include "servicediscoveryresponse.h"
#include "updateprivatednsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdatePrivateDnsNamespaceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdatePrivateDnsNamespaceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    UpdatePrivateDnsNamespaceResponse(const UpdatePrivateDnsNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePrivateDnsNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePrivateDnsNamespaceResponse)
    Q_DISABLE_COPY(UpdatePrivateDnsNamespaceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
