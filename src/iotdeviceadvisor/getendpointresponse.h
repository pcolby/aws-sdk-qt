// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTRESPONSE_H
#define QTAWS_GETENDPOINTRESPONSE_H

#include "iotdeviceadvisorresponse.h"
#include "getendpointrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetEndpointResponsePrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT GetEndpointResponse : public IotDeviceAdvisorResponse {
    Q_OBJECT

public:
    GetEndpointResponse(const GetEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEndpointResponse)
    Q_DISABLE_COPY(GetEndpointResponse)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
