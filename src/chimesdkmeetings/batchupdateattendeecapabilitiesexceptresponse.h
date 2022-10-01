// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEATTENDEECAPABILITIESEXCEPTRESPONSE_H
#define QTAWS_BATCHUPDATEATTENDEECAPABILITIESEXCEPTRESPONSE_H

#include "chimesdkmeetingsresponse.h"
#include "batchupdateattendeecapabilitiesexceptrequest.h"

namespace QtAws {
namespace ChimeSdkMeetings {

class BatchUpdateAttendeeCapabilitiesExceptResponsePrivate;

class QTAWSCHIMESDKMEETINGS_EXPORT BatchUpdateAttendeeCapabilitiesExceptResponse : public ChimeSdkMeetingsResponse {
    Q_OBJECT

public:
    BatchUpdateAttendeeCapabilitiesExceptResponse(const BatchUpdateAttendeeCapabilitiesExceptRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdateAttendeeCapabilitiesExceptRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateAttendeeCapabilitiesExceptResponse)
    Q_DISABLE_COPY(BatchUpdateAttendeeCapabilitiesExceptResponse)

};

} // namespace ChimeSdkMeetings
} // namespace QtAws

#endif
