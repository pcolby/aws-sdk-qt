// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPOLICYRESPONSE_P_H
#define QTAWS_EXECUTEPOLICYRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class ExecutePolicyResponse;

class ExecutePolicyResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit ExecutePolicyResponsePrivate(ExecutePolicyResponse * const q);

    void parseExecutePolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ExecutePolicyResponse)
    Q_DISABLE_COPY(ExecutePolicyResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
