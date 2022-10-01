// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMVOCABULARYRESPONSE_P_H
#define QTAWS_DELETECUSTOMVOCABULARYRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class DeleteCustomVocabularyResponse;

class DeleteCustomVocabularyResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit DeleteCustomVocabularyResponsePrivate(DeleteCustomVocabularyResponse * const q);

    void parseDeleteCustomVocabularyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomVocabularyResponse)
    Q_DISABLE_COPY(DeleteCustomVocabularyResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
