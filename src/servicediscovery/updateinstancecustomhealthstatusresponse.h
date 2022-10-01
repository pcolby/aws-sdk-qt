// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCECUSTOMHEALTHSTATUSRESPONSE_H
#define QTAWS_UPDATEINSTANCECUSTOMHEALTHSTATUSRESPONSE_H

#include "servicediscoveryresponse.h"
#include "updateinstancecustomhealthstatusrequest.h"

namespace QtAws {
namespace ServiceDiscovery {

class UpdateInstanceCustomHealthStatusResponsePrivate;

class QTAWSSERVICEDISCOVERY_EXPORT UpdateInstanceCustomHealthStatusResponse : public ServiceDiscoveryResponse {
    Q_OBJECT

public:
    UpdateInstanceCustomHealthStatusResponse(const UpdateInstanceCustomHealthStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateInstanceCustomHealthStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInstanceCustomHealthStatusResponse)
    Q_DISABLE_COPY(UpdateInstanceCustomHealthStatusResponse)

};

} // namespace ServiceDiscovery
} // namespace QtAws

#endif
