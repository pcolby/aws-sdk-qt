// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICERESPONSE_H
#define QTAWS_GETSERVICERESPONSE_H

#include "servicediscoveryresponse.h"
#include "getservicerequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetServiceResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT GetServiceResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    GetServiceResponse(const GetServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceResponse)
    Q_DISABLE_COPY(GetServiceResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
