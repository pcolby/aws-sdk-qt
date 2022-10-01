// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLISHERRESPONSE_P_H
#define QTAWS_DESCRIBEPUBLISHERRESPONSE_P_H

#include "cloudformationresponse_p.h"

namespace QtAws {
namespace CloudFormation {

class DescribePublisherResponse;

class DescribePublisherResponsePrivate : public CloudFormationResponsePrivate {

public:

    explicit DescribePublisherResponsePrivate(DescribePublisherResponse * const q);

    void parseDescribePublisherResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePublisherResponse)
    Q_DISABLE_COPY(DescribePublisherResponsePrivate)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
