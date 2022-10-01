// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTATTENDEESRESPONSE_H
#define QTAWS_LISTATTENDEESRESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "listattendeesrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class ListAttendeesResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT ListAttendeesResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    ListAttendeesResponse(const ListAttendeesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAttendeesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAttendeesResponse)
    Q_DISABLE_COPY(ListAttendeesResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
