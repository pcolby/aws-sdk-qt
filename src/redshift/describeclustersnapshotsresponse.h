// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERSNAPSHOTSRESPONSE_H
#define QTAWS_DESCRIBECLUSTERSNAPSHOTSRESPONSE_H

#include "redshiftresponse.h"
#include "describeclustersnapshotsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterSnapshotsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeClusterSnapshotsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeClusterSnapshotsResponse(const DescribeClusterSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClusterSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClusterSnapshotsResponse)
    Q_DISABLE_COPY(DescribeClusterSnapshotsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
