// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYTARGETGROUPSRESPONSE_H
#define QTAWS_DESCRIBEDBPROXYTARGETGROUPSRESPONSE_H

#include "rdsresponse.h"
#include "describedbproxytargetgroupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyTargetGroupsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBProxyTargetGroupsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBProxyTargetGroupsResponse(const DescribeDBProxyTargetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBProxyTargetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBProxyTargetGroupsResponse)
    Q_DISABLE_COPY(DescribeDBProxyTargetGroupsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
