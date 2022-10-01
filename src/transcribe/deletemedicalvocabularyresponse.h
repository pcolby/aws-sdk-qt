// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDICALVOCABULARYRESPONSE_H
#define QTAWS_DELETEMEDICALVOCABULARYRESPONSE_H

#include "transcriberesponse.h"
#include "deletemedicalvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteMedicalVocabularyResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteMedicalVocabularyResponse : public TranscribeResponse {
    Q_OBJECT

public:
    DeleteMedicalVocabularyResponse(const DeleteMedicalVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMedicalVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMedicalVocabularyResponse)
    Q_DISABLE_COPY(DeleteMedicalVocabularyResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
