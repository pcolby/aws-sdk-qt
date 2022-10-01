// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEACTIVATIONSRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DescribeActivationsResponse;

class DescribeActivationsResponsePrivate : public SsmResponsePrivate {

public:

    explicit DescribeActivationsResponsePrivate(DescribeActivationsResponse * const q);

    void parseDescribeActivationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeActivationsResponse)
    Q_DISABLE_COPY(DescribeActivationsResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
