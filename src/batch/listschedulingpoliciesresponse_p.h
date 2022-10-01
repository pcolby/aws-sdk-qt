// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULINGPOLICIESRESPONSE_P_H
#define QTAWS_LISTSCHEDULINGPOLICIESRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class ListSchedulingPoliciesResponse;

class ListSchedulingPoliciesResponsePrivate : public BatchResponsePrivate {

public:

    explicit ListSchedulingPoliciesResponsePrivate(ListSchedulingPoliciesResponse * const q);

    void parseListSchedulingPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSchedulingPoliciesResponse)
    Q_DISABLE_COPY(ListSchedulingPoliciesResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
