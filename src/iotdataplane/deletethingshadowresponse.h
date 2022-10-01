// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGSHADOWRESPONSE_H
#define QTAWS_DELETETHINGSHADOWRESPONSE_H

#include "iotdataplaneresponse.h"
#include "deletethingshadowrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class DeleteThingShadowResponsePrivate;

class QTAWSIOTDATAPLANE_EXPORT DeleteThingShadowResponse : public IoTDataPlaneResponse {
    Q_OBJECT

public:
    DeleteThingShadowResponse(const DeleteThingShadowRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteThingShadowRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteThingShadowResponse)
    Q_DISABLE_COPY(DeleteThingShadowResponse)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
