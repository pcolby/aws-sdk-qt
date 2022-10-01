// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTKEYPHRASESRESPONSE_P_H
#define QTAWS_BATCHDETECTKEYPHRASESRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectKeyPhrasesResponse;

class BatchDetectKeyPhrasesResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit BatchDetectKeyPhrasesResponsePrivate(BatchDetectKeyPhrasesResponse * const q);

    void parseBatchDetectKeyPhrasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDetectKeyPhrasesResponse)
    Q_DISABLE_COPY(BatchDetectKeyPhrasesResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
