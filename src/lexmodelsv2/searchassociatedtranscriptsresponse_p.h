// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHASSOCIATEDTRANSCRIPTSRESPONSE_P_H
#define QTAWS_SEARCHASSOCIATEDTRANSCRIPTSRESPONSE_P_H

#include "lexmodelsv2response_p.h"

namespace QtAws {
namespace LexModelsV2 {

class SearchAssociatedTranscriptsResponse;

class SearchAssociatedTranscriptsResponsePrivate : public LexModelsV2ResponsePrivate {

public:

    explicit SearchAssociatedTranscriptsResponsePrivate(SearchAssociatedTranscriptsResponse * const q);

    void parseSearchAssociatedTranscriptsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchAssociatedTranscriptsResponse)
    Q_DISABLE_COPY(SearchAssociatedTranscriptsResponsePrivate)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
