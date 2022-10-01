// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRANSCRIPTIONJOBSRESPONSE_P_H
#define QTAWS_LISTTRANSCRIPTIONJOBSRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class ListTranscriptionJobsResponse;

class ListTranscriptionJobsResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit ListTranscriptionJobsResponsePrivate(ListTranscriptionJobsResponse * const q);

    void parseListTranscriptionJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTranscriptionJobsResponse)
    Q_DISABLE_COPY(ListTranscriptionJobsResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
