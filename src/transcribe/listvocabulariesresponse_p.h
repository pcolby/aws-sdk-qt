// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOCABULARIESRESPONSE_P_H
#define QTAWS_LISTVOCABULARIESRESPONSE_P_H

#include "transcriberesponse_p.h"

namespace QtAws {
namespace Transcribe {

class ListVocabulariesResponse;

class ListVocabulariesResponsePrivate : public TranscribeResponsePrivate {

public:

    explicit ListVocabulariesResponsePrivate(ListVocabulariesResponse * const q);

    void parseListVocabulariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVocabulariesResponse)
    Q_DISABLE_COPY(ListVocabulariesResponsePrivate)

};

} // namespace Transcribe
} // namespace QtAws

#endif
