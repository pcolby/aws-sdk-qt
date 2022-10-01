// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBEDBSNAPSHOTSREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSnapshotsRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBSnapshotsRequest : public RdsRequest {

public:
    DescribeDBSnapshotsRequest(const DescribeDBSnapshotsRequest &other);
    DescribeDBSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBSnapshotsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
