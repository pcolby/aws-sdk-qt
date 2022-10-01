// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTENTITIESRESPONSE_P_H
#define QTAWS_BATCHDETECTENTITIESRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectEntitiesResponse;

class BatchDetectEntitiesResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit BatchDetectEntitiesResponsePrivate(BatchDetectEntitiesResponse * const q);

    void parseBatchDetectEntitiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDetectEntitiesResponse)
    Q_DISABLE_COPY(BatchDetectEntitiesResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
