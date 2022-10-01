// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSCRIPTIONJOBRESPONSE_P_H
#define QTAWS_GETTRANSCRIPTIONJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class GetTranscriptionJobResponse;

class GetTranscriptionJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit GetTranscriptionJobResponsePrivate(GetTranscriptionJobResponse * const q);

    void parseGetTranscriptionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTranscriptionJobResponse)
    Q_DISABLE_COPY(GetTranscriptionJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
