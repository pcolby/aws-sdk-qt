// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVOCABULARYRESPONSE_P_H
#define QTAWS_UPDATEVOCABULARYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class UpdateVocabularyResponse;

class UpdateVocabularyResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit UpdateVocabularyResponsePrivate(UpdateVocabularyResponse * const q);

    void parseUpdateVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateVocabularyResponse)
    Q_DISABLE_COPY(UpdateVocabularyResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
