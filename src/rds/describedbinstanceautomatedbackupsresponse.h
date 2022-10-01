// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSRESPONSE_H
#define QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSRESPONSE_H

#include "rdsresponse.h"
#include "describedbinstanceautomatedbackupsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBInstanceAutomatedBackupsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBInstanceAutomatedBackupsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBInstanceAutomatedBackupsResponse(const DescribeDBInstanceAutomatedBackupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBInstanceAutomatedBackupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBInstanceAutomatedBackupsResponse)
    Q_DISABLE_COPY(DescribeDBInstanceAutomatedBackupsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
