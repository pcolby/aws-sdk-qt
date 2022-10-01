// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOLICIESRESPONSE_P_H
#define QTAWS_DESCRIBEPOLICIESRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribePoliciesResponse;

class DescribePoliciesResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribePoliciesResponsePrivate(DescribePoliciesResponse * const q);

    void parseDescribePoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePoliciesResponse)
    Q_DISABLE_COPY(DescribePoliciesResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
