// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMEETINGTRANSCRIPTIONRESPONSE_H
#define QTAWS_STOPMEETINGTRANSCRIPTIONRESPONSE_H

#include "chimeresponse.h"
#include "stopmeetingtranscriptionrequest.h"

namespace QtAws {
namespace Chime {

class StopMeetingTranscriptionResponsePrivate;

class QTAWSCHIME_EXPORT StopMeetingTranscriptionResponse : public ChimeResponse {
    Q_OBJECT

public:
    StopMeetingTranscriptionResponse(const StopMeetingTranscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopMeetingTranscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMeetingTranscriptionResponse)
    Q_DISABLE_COPY(StopMeetingTranscriptionResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
