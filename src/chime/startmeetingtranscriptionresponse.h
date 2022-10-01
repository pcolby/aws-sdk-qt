// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEETINGTRANSCRIPTIONRESPONSE_H
#define QTAWS_STARTMEETINGTRANSCRIPTIONRESPONSE_H

#include "chimeresponse.h"
#include "startmeetingtranscriptionrequest.h"

namespace QtAws {
namespace Chime {

class StartMeetingTranscriptionResponsePrivate;

class QTAWSCHIME_EXPORT StartMeetingTranscriptionResponse : public ChimeResponse {
    Q_OBJECT

public:
    StartMeetingTranscriptionResponse(const StartMeetingTranscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMeetingTranscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMeetingTranscriptionResponse)
    Q_DISABLE_COPY(StartMeetingTranscriptionResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
