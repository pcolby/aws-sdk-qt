// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEINFORMATIONRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCEINFORMATIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeInstanceInformationResponse;

class DescribeInstanceInformationResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeInstanceInformationResponsePrivate(DescribeInstanceInformationResponse * const q);

    void parseDescribeInstanceInformationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceInformationResponse)
    Q_DISABLE_COPY(DescribeInstanceInformationResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
