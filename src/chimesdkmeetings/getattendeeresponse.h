// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETATTENDEERESPONSE_H
#define QTAWS_GETATTENDEERESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "getattendeerequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class GetAttendeeResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT GetAttendeeResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    GetAttendeeResponse(const GetAttendeeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAttendeeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAttendeeResponse)
    Q_DISABLE_COPY(GetAttendeeResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
