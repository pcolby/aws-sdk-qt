// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAUTOSCALINGPOLICYRESPONSE_P_H
#define QTAWS_PUTAUTOSCALINGPOLICYRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class PutAutoScalingPolicyResponse;

class PutAutoScalingPolicyResponsePrivate : public EmrResponsePrivate {

public:

    explicit PutAutoScalingPolicyResponsePrivate(PutAutoScalingPolicyResponse * const q);

    void parsePutAutoScalingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAutoScalingPolicyResponse)
    Q_DISABLE_COPY(PutAutoScalingPolicyResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
