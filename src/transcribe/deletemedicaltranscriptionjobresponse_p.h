// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDICALTRANSCRIPTIONJOBRESPONSE_P_H
#define QTAWS_DELETEMEDICALTRANSCRIPTIONJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DeleteMedicalTranscriptionJobResponse;

class DeleteMedicalTranscriptionJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DeleteMedicalTranscriptionJobResponsePrivate(DeleteMedicalTranscriptionJobResponse * const q);

    void parseDeleteMedicalTranscriptionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMedicalTranscriptionJobResponse)
    Q_DISABLE_COPY(DeleteMedicalTranscriptionJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
