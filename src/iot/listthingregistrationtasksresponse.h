// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGREGISTRATIONTASKSRESPONSE_H
#define QTAWS_LISTTHINGREGISTRATIONTASKSRESPONSE_H

#include "iotresponse.h"
#include "listthingregistrationtasksrequest.h"

namespace QtAws {
namespace IoT {

class ListThingRegistrationTasksResponsePrivate;

class QTAWSIOT_EXPORT ListThingRegistrationTasksResponse : public IoTResponse {
    Q_OBJECT

public:
    ListThingRegistrationTasksResponse(const ListThingRegistrationTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThingRegistrationTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingRegistrationTasksResponse)
    Q_DISABLE_COPY(ListThingRegistrationTasksResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
