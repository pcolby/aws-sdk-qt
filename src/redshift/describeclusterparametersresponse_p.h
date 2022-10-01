// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERPARAMETERSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterParametersResponse;

class DescribeClusterParametersResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeClusterParametersResponsePrivate(DescribeClusterParametersResponse * const q);

    void parseDescribeClusterParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterParametersResponse)
    Q_DISABLE_COPY(DescribeClusterParametersResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
