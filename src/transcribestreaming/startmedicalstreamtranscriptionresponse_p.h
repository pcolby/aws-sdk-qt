// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEDICALSTREAMTRANSCRIPTIONRESPONSE_P_H
#define QTAWS_STARTMEDICALSTREAMTRANSCRIPTIONRESPONSE_P_H

#include "transcribestreamingresponse_p.h"

namespace QtAws {
namespace TranscribeStreaming {

class StartMedicalStreamTranscriptionResponse;

class StartMedicalStreamTranscriptionResponsePrivate : public TranscribeStreamingResponsePrivate {

public:

    explicit StartMedicalStreamTranscriptionResponsePrivate(StartMedicalStreamTranscriptionResponse * const q);

    void parseStartMedicalStreamTranscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMedicalStreamTranscriptionResponse)
    Q_DISABLE_COPY(StartMedicalStreamTranscriptionResponsePrivate)

};

} // namespace TranscribeStreaming
} // namespace QtAws

#endif
