// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLEDBINSTANCEOPTIONSRESPONSE_H
#define QTAWS_DESCRIBEORDERABLEDBINSTANCEOPTIONSRESPONSE_H

#include "rdsresponse.h"
#include "describeorderabledbinstanceoptionsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeOrderableDBInstanceOptionsResponsePrivate;

class QTAWSRDS_EXPORT DescribeOrderableDBInstanceOptionsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeOrderableDBInstanceOptionsResponse(const DescribeOrderableDBInstanceOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrderableDBInstanceOptionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrderableDBInstanceOptionsResponse)
    Q_DISABLE_COPY(DescribeOrderableDBInstanceOptionsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
