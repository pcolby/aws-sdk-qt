// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANGESETHOOKSRESPONSE_P_H
#define QTAWS_DESCRIBECHANGESETHOOKSRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeChangeSetHooksResponse;

class DescribeChangeSetHooksResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeChangeSetHooksResponsePrivate(DescribeChangeSetHooksResponse * const q);

    void parseDescribeChangeSetHooksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeChangeSetHooksResponse)
    Q_DISABLE_COPY(DescribeChangeSetHooksResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
