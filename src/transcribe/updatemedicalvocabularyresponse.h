// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEDICALVOCABULARYRESPONSE_H
#define QTAWS_UPDATEMEDICALVOCABULARYRESPONSE_H

#include "transcriberesponse.h"
#include "updatemedicalvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class UpdateMedicalVocabularyResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT UpdateMedicalVocabularyResponse : public TranscribeResponse {
    Q_OBJECT

public:
    UpdateMedicalVocabularyResponse(const UpdateMedicalVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMedicalVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMedicalVocabularyResponse)
    Q_DISABLE_COPY(UpdateMedicalVocabularyResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
