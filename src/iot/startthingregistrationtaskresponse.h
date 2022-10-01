// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTHINGREGISTRATIONTASKRESPONSE_H
#define QTAWS_STARTTHINGREGISTRATIONTASKRESPONSE_H

#include "iotresponse.h"
#include "startthingregistrationtaskrequest.h"

namespace QtAws {
namespace IoT {

class StartThingRegistrationTaskResponsePrivate;

class QTAWSIOT_EXPORT StartThingRegistrationTaskResponse : public IoTResponse {
    Q_OBJECT

public:
    StartThingRegistrationTaskResponse(const StartThingRegistrationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartThingRegistrationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartThingRegistrationTaskResponse)
    Q_DISABLE_COPY(StartThingRegistrationTaskResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
