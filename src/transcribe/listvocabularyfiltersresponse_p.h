// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOCABULARYFILTERSRESPONSE_P_H
#define QTAWS_LISTVOCABULARYFILTERSRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class ListVocabularyFiltersResponse;

class ListVocabularyFiltersResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit ListVocabularyFiltersResponsePrivate(ListVocabularyFiltersResponse * const q);

    void parseListVocabularyFiltersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVocabularyFiltersResponse)
    Q_DISABLE_COPY(ListVocabularyFiltersResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
