// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHTTPNAMESPACERESPONSE_H
#define QTAWS_CREATEHTTPNAMESPACERESPONSE_H

#include "servicediscoveryresponse.h"
#include "createhttpnamespacerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class CreateHttpNamespaceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT CreateHttpNamespaceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    CreateHttpNamespaceResponse(const CreateHttpNamespaceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHttpNamespaceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHttpNamespaceResponse)
    Q_DISABLE_COPY(CreateHttpNamespaceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
