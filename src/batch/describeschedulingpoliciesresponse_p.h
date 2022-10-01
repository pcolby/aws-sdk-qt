// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULINGPOLICIESRESPONSE_P_H
#define QTAWS_DESCRIBESCHEDULINGPOLICIESRESPONSE_P_H

#include "batchresponse_p.h"

namespace QtAws {
namespace Batch {

class DescribeSchedulingPoliciesResponse;

class DescribeSchedulingPoliciesResponsePrivate : public BatchResponsePrivate {

public:

    explicit DescribeSchedulingPoliciesResponsePrivate(DescribeSchedulingPoliciesResponse * const q);

    void parseDescribeSchedulingPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSchedulingPoliciesResponse)
    Q_DISABLE_COPY(DescribeSchedulingPoliciesResponsePrivate)

};

} // namespace Batch
} // namespace QtAws

#endif
