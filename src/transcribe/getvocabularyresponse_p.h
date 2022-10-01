// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOCABULARYRESPONSE_P_H
#define QTAWS_GETVOCABULARYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class GetVocabularyResponse;

class GetVocabularyResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit GetVocabularyResponsePrivate(GetVocabularyResponse * const q);

    void parseGetVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVocabularyResponse)
    Q_DISABLE_COPY(GetVocabularyResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
