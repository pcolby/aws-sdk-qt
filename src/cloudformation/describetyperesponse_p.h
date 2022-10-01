// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETYPERESPONSE_P_H
#define QTAWS_DESCRIBETYPERESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribeTypeResponse;

class DescribeTypeResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribeTypeResponsePrivate(DescribeTypeResponse * const q);

    void parseDescribeTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTypeResponse)
    Q_DISABLE_COPY(DescribeTypeResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
