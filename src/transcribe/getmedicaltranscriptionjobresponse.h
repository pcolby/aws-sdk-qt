// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDICALTRANSCRIPTIONJOBRESPONSE_H
#define QTAWS_GETMEDICALTRANSCRIPTIONJOBRESPONSE_H

#include "transcriberesponse.h"
#include "getmedicaltranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class GetMedicalTranscriptionJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT GetMedicalTranscriptionJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    GetMedicalTranscriptionJobResponse(const GetMedicalTranscriptionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMedicalTranscriptionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMedicalTranscriptionJobResponse)
    Q_DISABLE_COPY(GetMedicalTranscriptionJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
