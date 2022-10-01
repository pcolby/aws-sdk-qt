// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDICALVOCABULARIESRESPONSE_H
#define QTAWS_LISTMEDICALVOCABULARIESRESPONSE_H

#include "transcriberesponse.h"
#include "listmedicalvocabulariesrequest.h"

namespace QtAws {
namespace Transcribe {

class ListMedicalVocabulariesResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT ListMedicalVocabulariesResponse : public TranscribeResponse {
    Q_OBJECT

public:
    ListMedicalVocabulariesResponse(const ListMedicalVocabulariesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMedicalVocabulariesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMedicalVocabulariesResponse)
    Q_DISABLE_COPY(ListMedicalVocabulariesResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
