// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEDICALSTREAMTRANSCRIPTIONRESPONSE_H
#define QTAWS_STARTMEDICALSTREAMTRANSCRIPTIONRESPONSE_H

#include "transcribestreamingresponse.h"
#include "startmedicalstreamtranscriptionrequest.h"

namespace QtAws {
namespace TranscribeStreaming {

class StartMedicalStreamTranscriptionResponsePrivate;

class QTAWSTRANSCRIBESTREAMING_EXPORT StartMedicalStreamTranscriptionResponse : public TranscribeStreamingResponse {
    Q_OBJECT

public:
    StartMedicalStreamTranscriptionResponse(const StartMedicalStreamTranscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMedicalStreamTranscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMedicalStreamTranscriptionResponse)
    Q_DISABLE_COPY(StartMedicalStreamTranscriptionResponse)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
