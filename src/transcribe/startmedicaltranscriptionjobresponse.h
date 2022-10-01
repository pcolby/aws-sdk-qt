// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMEDICALTRANSCRIPTIONJOBRESPONSE_H
#define QTAWS_STARTMEDICALTRANSCRIPTIONJOBRESPONSE_H

#include "transcriberesponse.h"
#include "startmedicaltranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class StartMedicalTranscriptionJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT StartMedicalTranscriptionJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    StartMedicalTranscriptionJobResponse(const StartMedicalTranscriptionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMedicalTranscriptionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMedicalTranscriptionJobResponse)
    Q_DISABLE_COPY(StartMedicalTranscriptionJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
