// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEDICALVOCABULARYRESPONSE_P_H
#define QTAWS_GETMEDICALVOCABULARYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class GetMedicalVocabularyResponse;

class GetMedicalVocabularyResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit GetMedicalVocabularyResponsePrivate(GetMedicalVocabularyResponse * const q);

    void parseGetMedicalVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMedicalVocabularyResponse)
    Q_DISABLE_COPY(GetMedicalVocabularyResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
