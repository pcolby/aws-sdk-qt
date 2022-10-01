// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRETAINEDMESSAGERESPONSE_H
#define QTAWS_GETRETAINEDMESSAGERESPONSE_H

#include "iotdataplaneresponse.h"
#include "getretainedmessagerequest.h"

namespace QtAws {
namespace IoTDataPlane {

class GetRetainedMessageResponsePrivate;

class QTAWSIOTDATAPLANE_EXPORT GetRetainedMessageResponse : public IoTDataPlaneResponse {
    Q_OBJECT

public:
    GetRetainedMessageResponse(const GetRetainedMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRetainedMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRetainedMessageResponse)
    Q_DISABLE_COPY(GetRetainedMessageResponse)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
