// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTCOPYGRANTSRESPONSE_H
#define QTAWS_DESCRIBESNAPSHOTCOPYGRANTSRESPONSE_H

#include "redshiftresponse.h"
#include "describesnapshotcopygrantsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeSnapshotCopyGrantsResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeSnapshotCopyGrantsResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeSnapshotCopyGrantsResponse(const DescribeSnapshotCopyGrantsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSnapshotCopyGrantsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotCopyGrantsResponse)
    Q_DISABLE_COPY(DescribeSnapshotCopyGrantsResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
