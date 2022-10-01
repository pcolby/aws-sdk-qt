// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSCRIPTIONJOBRESPONSE_P_H
#define QTAWS_DELETETRANSCRIPTIONJOBRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DeleteTranscriptionJobResponse;

class DeleteTranscriptionJobResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DeleteTranscriptionJobResponsePrivate(DeleteTranscriptionJobResponse * const q);

    void parseDeleteTranscriptionJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTranscriptionJobResponse)
    Q_DISABLE_COPY(DeleteTranscriptionJobResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
