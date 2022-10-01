// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSREQUEST_H
#define QTAWS_DESCRIBEDBINSTANCEAUTOMATEDBACKUPSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBInstanceAutomatedBackupsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBInstanceAutomatedBackupsRequest : public RdsRequest {

public:
    DescribeDBInstanceAutomatedBackupsRequest(const DescribeDBInstanceAutomatedBackupsRequest &other);
    DescribeDBInstanceAutomatedBackupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBInstanceAutomatedBackupsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
