// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEETINGRESPONSE_H
#define QTAWS_DELETEMEETINGRESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "deletemeetingrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class DeleteMeetingResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT DeleteMeetingResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    DeleteMeetingResponse(const DeleteMeetingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMeetingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMeetingResponse)
    Q_DISABLE_COPY(DeleteMeetingResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
