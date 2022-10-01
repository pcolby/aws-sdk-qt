// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeDBClusterSnapshotsRequestPrivate;

class QTAWSDOCDB_EXPORT DescribeDBClusterSnapshotsRequest : public DocDbRequest {

public:
    DescribeDBClusterSnapshotsRequest(const DescribeDBClusterSnapshotsRequest &other);
    DescribeDBClusterSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterSnapshotsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
