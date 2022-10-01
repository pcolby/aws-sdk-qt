// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULINGPOLICYRESPONSE_P_H
#define QTAWS_UPDATESCHEDULINGPOLICYRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class UpdateSchedulingPolicyResponse;

class UpdateSchedulingPolicyResponsePrivate : public BatchResponsePrivate {

public:

    explicit UpdateSchedulingPolicyResponsePrivate(UpdateSchedulingPolicyResponse * const q);

    void parseUpdateSchedulingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSchedulingPolicyResponse)
    Q_DISABLE_COPY(UpdateSchedulingPolicyResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
