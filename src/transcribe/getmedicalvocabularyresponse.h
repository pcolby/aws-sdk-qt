// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDICALVOCABULARYRESPONSE_H
#define QTAWS_GETMEDICALVOCABULARYRESPONSE_H

#include "transcriberesponse.h"
#include "getmedicalvocabularyrequest.h"

namespace QtAws {
namespace Transcribe {

class GetMedicalVocabularyResponsePrivate;

class QTAWSTRANSCRIBE_EXPORT GetMedicalVocabularyResponse : public TranscribeResponse {
    Q_OBJECT

public:
    GetMedicalVocabularyResponse(const GetMedicalVocabularyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMedicalVocabularyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMedicalVocabularyResponse)
    Q_DISABLE_COPY(GetMedicalVocabularyResponse)

};

} // namespace Transcribe
} // namespace QtAws

#endif
