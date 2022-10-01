// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterSnapshotsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBClusterSnapshotsRequest : public RdsRequest {

public:
    DescribeDBClusterSnapshotsRequest(const DescribeDBClusterSnapshotsRequest &other);
    DescribeDBClusterSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterSnapshotsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
