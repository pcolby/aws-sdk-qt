// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRANSCRIPTIONJOBRESPONSE_P_H
#define QTAWS_STARTTRANSCRIPTIONJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class StartTranscriptionJobResponse;

class StartTranscriptionJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit StartTranscriptionJobResponsePrivate(StartTranscriptionJobResponse * const q);

    void parseStartTranscriptionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartTranscriptionJobResponse)
    Q_DISABLE_COPY(StartTranscriptionJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
