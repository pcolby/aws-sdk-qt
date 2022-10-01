// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSRESPONSE_P_H
#define QTAWS_DESCRIBEUSERSRESPONSE_P_H

#include "elasticacheresponse_p.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUsersResponse;

class DescribeUsersResponsePrivate : public ElastiCacheResponsePrivate {

public:

    explicit DescribeUsersResponsePrivate(DescribeUsersResponse * const q);

    void parseDescribeUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUsersResponse)
    Q_DISABLE_COPY(DescribeUsersResponsePrivate)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
