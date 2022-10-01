// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPARAMETERGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEDBPARAMETERGROUPSRESPONSE_P_H

#include "neptuneresponse_p.h"

namespace QtAws {
namespace Neptune {

class DescribeDBParameterGroupsResponse;

class DescribeDBParameterGroupsResponsePrivate : public NeptuneResponsePrivate {

public:

    explicit DescribeDBParameterGroupsResponsePrivate(DescribeDBParameterGroupsResponse * const q);

    void parseDescribeDBParameterGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDBParameterGroupsResponse)
    Q_DISABLE_COPY(DescribeDBParameterGroupsResponsePrivate)

};

} // namespace Neptune
} // namespace QtAws

#endif
