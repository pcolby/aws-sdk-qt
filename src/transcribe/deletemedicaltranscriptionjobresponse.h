// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDICALTRANSCRIPTIONJOBRESPONSE_H
#define QTAWS_DELETEMEDICALTRANSCRIPTIONJOBRESPONSE_H

#include "transcriberesponse.h"
#include "deletemedicaltranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteMedicalTranscriptionJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteMedicalTranscriptionJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DeleteMedicalTranscriptionJobResponse(const DeleteMedicalTranscriptionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMedicalTranscriptionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMedicalTranscriptionJobResponse)
    Q_DISABLE_COPY(DeleteMedicalTranscriptionJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
