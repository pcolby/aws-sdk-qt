// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERGROUPSRESPONSE_H
#define QTAWS_DESCRIBEUSERGROUPSRESPONSE_H

#include "elasticacheresponse.h"
#include "describeusergroupsrequest.h"

namespace QtAws {
namespace ElastiCache {

class DescribeUserGroupsResponsePrivate;

class QTAWSELASTICACHE_EXPORT DescribeUserGroupsResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    DescribeUserGroupsResponse(const DescribeUserGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeUserGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeUserGroupsResponse)
    Q_DISABLE_COPY(DescribeUserGroupsResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
