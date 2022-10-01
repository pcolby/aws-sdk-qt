// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEDBPARAMETERSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeDBParametersResponse;

class DescribeDBParametersResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeDBParametersResponsePrivate(DescribeDBParametersResponse * const q);

    void parseDescribeDBParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBParametersResponse)
    Q_DISABLE_COPY(DescribeDBParametersResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
