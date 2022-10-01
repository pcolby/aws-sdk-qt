// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEETINGWITHATTENDEESRESPONSE_H
#define QTAWS_CREATEMEETINGWITHATTENDEESRESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "createmeetingwithattendeesrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class CreateMeetingWithAttendeesResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT CreateMeetingWithAttendeesResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    CreateMeetingWithAttendeesResponse(const CreateMeetingWithAttendeesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMeetingWithAttendeesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMeetingWithAttendeesResponse)
    Q_DISABLE_COPY(CreateMeetingWithAttendeesResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
