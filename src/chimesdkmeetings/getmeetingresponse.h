// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEETINGRESPONSE_H
#define QTAWS_GETMEETINGRESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "getmeetingrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class GetMeetingResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT GetMeetingResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    GetMeetingResponse(const GetMeetingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMeetingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMeetingResponse)
    Q_DISABLE_COPY(GetMeetingResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
