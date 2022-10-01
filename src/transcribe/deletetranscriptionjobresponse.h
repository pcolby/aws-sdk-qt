// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRANSCRIPTIONJOBRESPONSE_H
#define QTAWS_DELETETRANSCRIPTIONJOBRESPONSE_H

#include "transcriberesponse.h"
#include "deletetranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteTranscriptionJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteTranscriptionJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DeleteTranscriptionJobResponse(const DeleteTranscriptionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTranscriptionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTranscriptionJobResponse)
    Q_DISABLE_COPY(DeleteTranscriptionJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
