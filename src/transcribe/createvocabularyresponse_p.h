// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYRESPONSE_P_H
#define QTAWS_CREATEVOCABULARYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class CreateVocabularyResponse;

class CreateVocabularyResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit CreateVocabularyResponsePrivate(CreateVocabularyResponse * const q);

    void parseCreateVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVocabularyResponse)
    Q_DISABLE_COPY(CreateVocabularyResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
