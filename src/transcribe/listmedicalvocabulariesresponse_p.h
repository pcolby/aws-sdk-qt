// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEDICALVOCABULARIESRESPONSE_P_H
#define QTAWS_LISTMEDICALVOCABULARIESRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class ListMedicalVocabulariesResponse;

class ListMedicalVocabulariesResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit ListMedicalVocabulariesResponsePrivate(ListMedicalVocabulariesResponse * const q);

    void parseListMedicalVocabulariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMedicalVocabulariesResponse)
    Q_DISABLE_COPY(ListMedicalVocabulariesResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
