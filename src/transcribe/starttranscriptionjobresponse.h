// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTTRANSCRIPTIONJOBRESPONSE_H
#define QTAWS_STARTTRANSCRIPTIONJOBRESPONSE_H

#include "transcriberesponse.h"
#include "starttranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class StartTranscriptionJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT StartTranscriptionJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    StartTranscriptionJobResponse(const StartTranscriptionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartTranscriptionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartTranscriptionJobResponse)
    Q_DISABLE_COPY(StartTranscriptionJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
