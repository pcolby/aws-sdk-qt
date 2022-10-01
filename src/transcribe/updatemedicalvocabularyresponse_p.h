// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEDICALVOCABULARYRESPONSE_P_H
#define QTAWS_UPDATEMEDICALVOCABULARYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class UpdateMedicalVocabularyResponse;

class UpdateMedicalVocabularyResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit UpdateMedicalVocabularyResponsePrivate(UpdateMedicalVocabularyResponse * const q);

    void parseUpdateMedicalVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMedicalVocabularyResponse)
    Q_DISABLE_COPY(UpdateMedicalVocabularyResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
