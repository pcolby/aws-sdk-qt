// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTKEYPHRASESRESPONSE_P_H
#define QTAWS_DETECTKEYPHRASESRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class DetectKeyPhrasesResponse;

class DetectKeyPhrasesResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit DetectKeyPhrasesResponsePrivate(DetectKeyPhrasesResponse * const q);

    void parseDetectKeyPhrasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetectKeyPhrasesResponse)
    Q_DISABLE_COPY(DetectKeyPhrasesResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
