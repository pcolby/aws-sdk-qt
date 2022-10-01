// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEATTENDEECAPABILITIESRESPONSE_H
#define QTAWS_UPDATEATTENDEECAPABILITIESRESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "updateattendeecapabilitiesrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class UpdateAttendeeCapabilitiesResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT UpdateAttendeeCapabilitiesResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    UpdateAttendeeCapabilitiesResponse(const UpdateAttendeeCapabilitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAttendeeCapabilitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAttendeeCapabilitiesResponse)
    Q_DISABLE_COPY(UpdateAttendeeCapabilitiesResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
