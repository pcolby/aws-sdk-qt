// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEASSOCIATIONSSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEASSOCIATIONSSTATUSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeInstanceAssociationsStatusResponse;

class DescribeInstanceAssociationsStatusResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeInstanceAssociationsStatusResponsePrivate(DescribeInstanceAssociationsStatusResponse * const q);

    void parseDescribeInstanceAssociationsStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceAssociationsStatusResponse)
    Q_DISABLE_COPY(DescribeInstanceAssociationsStatusResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
