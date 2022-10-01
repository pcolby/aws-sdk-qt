// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDICALTRANSCRIPTIONJOBRESPONSE_P_H
#define QTAWS_GETMEDICALTRANSCRIPTIONJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class GetMedicalTranscriptionJobResponse;

class GetMedicalTranscriptionJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit GetMedicalTranscriptionJobResponsePrivate(GetMedicalTranscriptionJobResponse * const q);

    void parseGetMedicalTranscriptionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMedicalTranscriptionJobResponse)
    Q_DISABLE_COPY(GetMedicalTranscriptionJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
