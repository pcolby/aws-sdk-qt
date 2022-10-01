// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOCABULARYFILTERRESPONSE_P_H
#define QTAWS_CREATEVOCABULARYFILTERRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class CreateVocabularyFilterResponse;

class CreateVocabularyFilterResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit CreateVocabularyFilterResponsePrivate(CreateVocabularyFilterResponse * const q);

    void parseCreateVocabularyFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVocabularyFilterResponse)
    Q_DISABLE_COPY(CreateVocabularyFilterResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
