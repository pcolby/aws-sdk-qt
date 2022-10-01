// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSNAPSHOTATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEDBSNAPSHOTATTRIBUTESREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSnapshotAttributesRequestPrivate;

class QTAWSRDS_EXPORT DescribeDBSnapshotAttributesRequest : public RdsRequest {

public:
    DescribeDBSnapshotAttributesRequest(const DescribeDBSnapshotAttributesRequest &other);
    DescribeDBSnapshotAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBSnapshotAttributesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
