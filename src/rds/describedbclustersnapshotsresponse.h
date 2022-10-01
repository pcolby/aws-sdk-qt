// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSRESPONSE_H
#define QTAWS_DESCRIBEDBCLUSTERSNAPSHOTSRESPONSE_H

#include "rdsresponse.h"
#include "describedbclustersnapshotsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBClusterSnapshotsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBClusterSnapshotsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBClusterSnapshotsResponse(const DescribeDBClusterSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBClusterSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBClusterSnapshotsResponse)
    Q_DISABLE_COPY(DescribeDBClusterSnapshotsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
