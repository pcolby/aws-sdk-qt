// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICDNSNAMESPACERESPONSE_H
#define QTAWS_UPDATEPUBLICDNSNAMESPACERESPONSE_H

#include "servicediscoveryresponse.h"
#include "updatepublicdnsnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdatePublicDnsNamespaceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdatePublicDnsNamespaceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    UpdatePublicDnsNamespaceResponse(const UpdatePublicDnsNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePublicDnsNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePublicDnsNamespaceResponse)
    Q_DISABLE_COPY(UpdatePublicDnsNamespaceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
