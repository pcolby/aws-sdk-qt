// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBPROXIESRESPONSE_H
#define QTAWS_DESCRIBEDBPROXIESRESPONSE_H

#include "rdsresponse.h"
#include "describedbproxiesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBProxiesResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBProxiesResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBProxiesResponse(const DescribeDBProxiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBProxiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBProxiesResponse)
    Q_DISABLE_COPY(DescribeDBProxiesResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
