// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGREGISTRATIONTASKREPORTSRESPONSE_H
#define QTAWS_LISTTHINGREGISTRATIONTASKREPORTSRESPONSE_H

#include "iotresponse.h"
#include "listthingregistrationtaskreportsrequest.h"

namespace QtAws {
namespace IoT {

class ListThingRegistrationTaskReportsResponsePrivate;

class QTAWSIOT_EXPORT ListThingRegistrationTaskReportsResponse : public IoTResponse {
    Q_OBJECT

public:
    ListThingRegistrationTaskReportsResponse(const ListThingRegistrationTaskReportsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListThingRegistrationTaskReportsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListThingRegistrationTaskReportsResponse)
    Q_DISABLE_COPY(ListThingRegistrationTaskReportsResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
