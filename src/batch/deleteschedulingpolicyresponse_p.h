// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULINGPOLICYRESPONSE_P_H
#define QTAWS_DELETESCHEDULINGPOLICYRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class DeleteSchedulingPolicyResponse;

class DeleteSchedulingPolicyResponsePrivate : public BatchResponsePrivate {

public:

    explicit DeleteSchedulingPolicyResponsePrivate(DeleteSchedulingPolicyResponse * const q);

    void parseDeleteSchedulingPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSchedulingPolicyResponse)
    Q_DISABLE_COPY(DeleteSchedulingPolicyResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
