// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPTHINGREGISTRATIONTASKRESPONSE_H
#define QTAWS_STOPTHINGREGISTRATIONTASKRESPONSE_H

#include "iotresponse.h"
#include "stopthingregistrationtaskrequest.h"

namespace QtAws {
namespace IoT {

class StopThingRegistrationTaskResponsePrivate;

class QTAWSIOT_EXPORT StopThingRegistrationTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    StopThingRegistrationTaskResponse(const StopThingRegistrationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopThingRegistrationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopThingRegistrationTaskResponse)
    Q_DISABLE_COPY(StopThingRegistrationTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
