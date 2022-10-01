// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDICALVOCABULARYRESPONSE_H
#define QTAWS_CREATEMEDICALVOCABULARYRESPONSE_H

#include "transcriberesponse.h"
#include "createmedicalvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class CreateMedicalVocabularyResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT CreateMedicalVocabularyResponse : public TranscribeResponse {
    Q_OBJECT

public:
    CreateMedicalVocabularyResponse(const CreateMedicalVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMedicalVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMedicalVocabularyResponse)
    Q_DISABLE_COPY(CreateMedicalVocabularyResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
