// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYRESPONSE_P_H
#define QTAWS_DELETEVOCABULARYRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DeleteVocabularyResponse;

class DeleteVocabularyResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DeleteVocabularyResponsePrivate(DeleteVocabularyResponse * const q);

    void parseDeleteVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVocabularyResponse)
    Q_DISABLE_COPY(DeleteVocabularyResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
