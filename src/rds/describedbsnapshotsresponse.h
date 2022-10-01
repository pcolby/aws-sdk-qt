// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSNAPSHOTSRESPONSE_H
#define QTAWS_DESCRIBEDBSNAPSHOTSRESPONSE_H

#include "rdsresponse.h"
#include "describedbsnapshotsrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSnapshotsResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBSnapshotsResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBSnapshotsResponse(const DescribeDBSnapshotsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBSnapshotsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBSnapshotsResponse)
    Q_DISABLE_COPY(DescribeDBSnapshotsResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
