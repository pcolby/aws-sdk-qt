// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSCRIPTIONJOBRESPONSE_H
#define QTAWS_GETTRANSCRIPTIONJOBRESPONSE_H

#include "transcriberesponse.h"
#include "gettranscriptionjobrequest.h"

namespace QtAws {
namespace Transcribe {

class GetTranscriptionJobResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT GetTranscriptionJobResponse : public TranscribeResponse {
    Q_OBJECT

public:
    GetTranscriptionJobResponse(const GetTranscriptionJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTranscriptionJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTranscriptionJobResponse)
    Q_DISABLE_COPY(GetTranscriptionJobResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
