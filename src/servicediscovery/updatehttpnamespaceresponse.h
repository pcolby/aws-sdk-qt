// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHTTPNAMESPACERESPONSE_H
#define QTAWS_UPDATEHTTPNAMESPACERESPONSE_H

#include "servicediscoveryresponse.h"
#include "updatehttpnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateHttpNamespaceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdateHttpNamespaceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    UpdateHttpNamespaceResponse(const UpdateHttpNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHttpNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHttpNamespaceResponse)
    Q_DISABLE_COPY(UpdateHttpNamespaceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
