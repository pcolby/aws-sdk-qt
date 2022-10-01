// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESHEALTHSTATUSRESPONSE_H
#define QTAWS_GETINSTANCESHEALTHSTATUSRESPONSE_H

#include "servicediscoveryresponse.h"
#include "getinstanceshealthstatusrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class GetInstancesHealthStatusResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT GetInstancesHealthStatusResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    GetInstancesHealthStatusResponse(const GetInstancesHealthStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstancesHealthStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInstancesHealthStatusResponse)
    Q_DISABLE_COPY(GetInstancesHealthStatusResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
