// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEVALUATEFEATURERESPONSE_P_H
#define QTAWS_BATCHEVALUATEFEATURERESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class BatchEvaluateFeatureResponse;

class BatchEvaluateFeatureResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit BatchEvaluateFeatureResponsePrivate(BatchEvaluateFeatureResponse * const q);

    void parseBatchEvaluateFeatureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchEvaluateFeatureResponse)
    Q_DISABLE_COPY(BatchEvaluateFeatureResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
