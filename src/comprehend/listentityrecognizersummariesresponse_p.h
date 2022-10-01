// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITYRECOGNIZERSUMMARIESRESPONSE_P_H
#define QTAWS_LISTENTITYRECOGNIZERSUMMARIESRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class ListEntityRecognizerSummariesResponse;

class ListEntityRecognizerSummariesResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit ListEntityRecognizerSummariesResponsePrivate(ListEntityRecognizerSummariesResponse * const q);

    void parseListEntityRecognizerSummariesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntityRecognizerSummariesResponse)
    Q_DISABLE_COPY(ListEntityRecognizerSummariesResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
