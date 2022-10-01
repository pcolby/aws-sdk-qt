// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEDICALVOCABULARYRESPONSE_P_H
#define QTAWS_CREATEMEDICALVOCABULARYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class CreateMedicalVocabularyResponse;

class CreateMedicalVocabularyResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit CreateMedicalVocabularyResponsePrivate(CreateMedicalVocabularyResponse * const q);

    void parseCreateMedicalVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMedicalVocabularyResponse)
    Q_DISABLE_COPY(CreateMedicalVocabularyResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
