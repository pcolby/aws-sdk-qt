// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTSYNTAXRESPONSE_P_H
#define QTAWS_BATCHDETECTSYNTAXRESPONSE_P_H

#include "comprehendresponse_p.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectSyntaxResponse;

class BatchDetectSyntaxResponsePrivate : public ComprehendResponsePrivate {

public:

    explicit BatchDetectSyntaxResponsePrivate(BatchDetectSyntaxResponse * const q);

    void parseBatchDetectSyntaxResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDetectSyntaxResponse)
    Q_DISABLE_COPY(BatchDetectSyntaxResponsePrivate)

};

} // namespace Comprehend
} // namespace QtAws

#endif
