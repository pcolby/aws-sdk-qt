// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMTRANSCRIPTIONRESPONSE_H
#define QTAWS_STARTSTREAMTRANSCRIPTIONRESPONSE_H

#include "transcribestreamingresponse.h"
#include "startstreamtranscriptionrequest.h"

namespace QtAws {
namespace TranscribeStreaming {

class StartStreamTranscriptionResponsePrivate;

class QTAWSTRANSCRIBESTREAMING_EXPORT StartStreamTranscriptionResponse : public TranscribeStreamingResponse {
    Q_OBJECT

public:
    StartStreamTranscriptionResponse(const StartStreamTranscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartStreamTranscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStreamTranscriptionResponse)
    Q_DISABLE_COPY(StartStreamTranscriptionResponse)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
