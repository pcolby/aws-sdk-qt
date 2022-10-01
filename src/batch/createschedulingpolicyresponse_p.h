// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULINGPOLICYRESPONSE_P_H
#define QTAWS_CREATESCHEDULINGPOLICYRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class CreateSchedulingPolicyResponse;

class CreateSchedulingPolicyResponsePrivate : public BatchResponsePrivate {

public:

    explicit CreateSchedulingPolicyResponsePrivate(CreateSchedulingPolicyResponse * const q);

    void parseCreateSchedulingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSchedulingPolicyResponse)
    Q_DISABLE_COPY(CreateSchedulingPolicyResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
