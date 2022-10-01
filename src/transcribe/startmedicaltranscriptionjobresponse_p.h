// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEDICALTRANSCRIPTIONJOBRESPONSE_P_H
#define QTAWS_STARTMEDICALTRANSCRIPTIONJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class StartMedicalTranscriptionJobResponse;

class StartMedicalTranscriptionJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit StartMedicalTranscriptionJobResponsePrivate(StartMedicalTranscriptionJobResponse * const q);

    void parseStartMedicalTranscriptionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMedicalTranscriptionJobResponse)
    Q_DISABLE_COPY(StartMedicalTranscriptionJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
