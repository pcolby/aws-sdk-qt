// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEDICALVOCABULARYRESPONSE_P_H
#define QTAWS_DELETEMEDICALVOCABULARYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DeleteMedicalVocabularyResponse;

class DeleteMedicalVocabularyResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DeleteMedicalVocabularyResponsePrivate(DeleteMedicalVocabularyResponse * const q);

    void parseDeleteMedicalVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMedicalVocabularyResponse)
    Q_DISABLE_COPY(DeleteMedicalVocabularyResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
