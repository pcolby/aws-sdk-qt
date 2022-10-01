// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBFLOWSRESPONSE_P_H
#define QTAWS_DESCRIBEJOBFLOWSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class DescribeJobFlowsResponse;

class DescribeJobFlowsResponsePrivate : public EmrResponsePrivate {

public:

    explicit DescribeJobFlowsResponsePrivate(DescribeJobFlowsResponse * const q);

    void parseDescribeJobFlowsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobFlowsResponse)
    Q_DISABLE_COPY(DescribeJobFlowsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
