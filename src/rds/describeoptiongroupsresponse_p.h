// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTIONGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBEOPTIONGROUPSRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DescribeOptionGroupsResponse;

class DescribeOptionGroupsResponsePrivate : public RdsResponsePrivate {

public:

    explicit DescribeOptionGroupsResponsePrivate(DescribeOptionGroupsResponse * const q);

    void parseDescribeOptionGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOptionGroupsResponse)
    Q_DISABLE_COPY(DescribeOptionGroupsResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
