// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOCABULARYFILTERRESPONSE_P_H
#define QTAWS_UPDATEVOCABULARYFILTERRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class UpdateVocabularyFilterResponse;

class UpdateVocabularyFilterResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit UpdateVocabularyFilterResponsePrivate(UpdateVocabularyFilterResponse * const q);

    void parseUpdateVocabularyFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVocabularyFilterResponse)
    Q_DISABLE_COPY(UpdateVocabularyFilterResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
