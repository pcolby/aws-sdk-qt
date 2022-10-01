// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDICALTRANSCRIPTIONJOBSRESPONSE_P_H
#define QTAWS_LISTMEDICALTRANSCRIPTIONJOBSRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class ListMedicalTranscriptionJobsResponse;

class ListMedicalTranscriptionJobsResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit ListMedicalTranscriptionJobsResponsePrivate(ListMedicalTranscriptionJobsResponse * const q);

    void parseListMedicalTranscriptionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMedicalTranscriptionJobsResponse)
    Q_DISABLE_COPY(ListMedicalTranscriptionJobsResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
