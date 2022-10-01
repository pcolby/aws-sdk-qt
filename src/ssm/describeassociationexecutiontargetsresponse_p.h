// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEASSOCIATIONEXECUTIONTARGETSRESPONSE_P_H
#define QTAWS_DESCRIBEASSOCIATIONEXECUTIONTARGETSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeAssociationExecutionTargetsResponse;

class DescribeAssociationExecutionTargetsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeAssociationExecutionTargetsResponsePrivate(DescribeAssociationExecutionTargetsResponse * const q);

    void parseDescribeAssociationExecutionTargetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAssociationExecutionTargetsResponse)
    Q_DISABLE_COPY(DescribeAssociationExecutionTargetsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
