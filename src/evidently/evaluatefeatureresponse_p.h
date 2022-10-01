// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATEFEATURERESPONSE_P_H
#define QTAWS_EVALUATEFEATURERESPONSE_P_H

#include "evidentlyresponse_p.h"

namespace QtAws {
namespace Evidently {

class EvaluateFeatureResponse;

class EvaluateFeatureResponsePrivate : public EvidentlyResponsePrivate {

public:

    explicit EvaluateFeatureResponsePrivate(EvaluateFeatureResponse * const q);

    void parseEvaluateFeatureResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EvaluateFeatureResponse)
    Q_DISABLE_COPY(EvaluateFeatureResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
