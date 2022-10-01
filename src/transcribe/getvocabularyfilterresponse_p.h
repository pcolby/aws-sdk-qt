// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOCABULARYFILTERRESPONSE_P_H
#define QTAWS_GETVOCABULARYFILTERRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class GetVocabularyFilterResponse;

class GetVocabularyFilterResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit GetVocabularyFilterResponsePrivate(GetVocabularyFilterResponse * const q);

    void parseGetVocabularyFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVocabularyFilterResponse)
    Q_DISABLE_COPY(GetVocabularyFilterResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
