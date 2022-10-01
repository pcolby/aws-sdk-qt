// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERPARAMETERGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERPARAMETERGROUPSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterParameterGroupsResponse;

class DescribeClusterParameterGroupsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeClusterParameterGroupsResponsePrivate(DescribeClusterParameterGroupsResponse * const q);

    void parseDescribeClusterParameterGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeClusterParameterGroupsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
