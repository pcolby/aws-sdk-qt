// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGSHADOWRESPONSE_H
#define QTAWS_UPDATETHINGSHADOWRESPONSE_H

#include "iotdataplaneresponse.h"
#include "updatethingshadowrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class UpdateThingShadowResponsePrivate;

class QTAWSIOTDATAPLANE_EXPORT UpdateThingShadowResponse : public IoTDataPlaneResponse {
    Q_OBJECT

public:
    UpdateThingShadowResponse(const UpdateThingShadowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThingShadowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThingShadowResponse)
    Q_DISABLE_COPY(UpdateThingShadowResponse)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
