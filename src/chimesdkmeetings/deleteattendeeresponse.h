// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEATTENDEERESPONSE_H
#define QTAWS_DELETEATTENDEERESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "deleteattendeerequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class DeleteAttendeeResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT DeleteAttendeeResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    DeleteAttendeeResponse(const DeleteAttendeeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAttendeeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAttendeeResponse)
    Q_DISABLE_COPY(DeleteAttendeeResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
