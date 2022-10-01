// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSNAPSHOTSREQUEST_H
#define QTAWS_DESCRIBECLUSTERSNAPSHOTSREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSnapshotsRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterSnapshotsRequest : public RedshiftRequest {

public:
    DescribeClusterSnapshotsRequest(const DescribeClusterSnapshotsRequest &other);
    DescribeClusterSnapshotsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterSnapshotsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
