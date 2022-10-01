// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTHINGSHADOWRESPONSE_H
#define QTAWS_GETTHINGSHADOWRESPONSE_H

#include "iotdataplaneresponse.h"
#include "getthingshadowrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class GetThingShadowResponsePrivate;

class QTAWSIOTDATAPLANE_EXPORT GetThingShadowResponse : public IoTDataPlaneResponse {
    Q_OBJECT

public:
    GetThingShadowResponse(const GetThingShadowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetThingShadowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetThingShadowResponse)
    Q_DISABLE_COPY(GetThingShadowResponse)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
