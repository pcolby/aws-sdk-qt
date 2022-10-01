// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOCABULARYFILTERRESPONSE_P_H
#define QTAWS_DELETEVOCABULARYFILTERRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class DeleteVocabularyFilterResponse;

class DeleteVocabularyFilterResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit DeleteVocabularyFilterResponsePrivate(DeleteVocabularyFilterResponse * const q);

    void parseDeleteVocabularyFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVocabularyFilterResponse)
    Q_DISABLE_COPY(DeleteVocabularyFilterResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
