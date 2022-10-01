// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEFAULTCLUSTERPARAMETERSRESPONSE_P_H
#define QTAWS_DESCRIBEDEFAULTCLUSTERPARAMETERSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeDefaultClusterParametersResponse;

class DescribeDefaultClusterParametersResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeDefaultClusterParametersResponsePrivate(DescribeDefaultClusterParametersResponse * const q);

    void parseDescribeDefaultClusterParametersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDefaultClusterParametersResponse)
    Q_DISABLE_COPY(DescribeDefaultClusterParametersResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
