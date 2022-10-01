// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXYTARGETSRESPONSE_H
#define QTAWS_DESCRIBEDBPROXYTARGETSRESPONSE_H

#include "rdsresponse.h"
#include "describedbproxytargetsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxyTargetsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBProxyTargetsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBProxyTargetsResponse(const DescribeDBProxyTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBProxyTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBProxyTargetsResponse)
    Q_DISABLE_COPY(DescribeDBProxyTargetsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
