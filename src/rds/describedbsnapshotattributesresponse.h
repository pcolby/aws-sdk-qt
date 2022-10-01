// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDBSNAPSHOTATTRIBUTESRESPONSE_H
#define QTAWS_DESCRIBEDBSNAPSHOTATTRIBUTESRESPONSE_H

#include "rdsresponse.h"
#include "describedbsnapshotattributesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeDBSnapshotAttributesResponsePrivate;

class QTAWSRDS_EXPORT DescribeDBSnapshotAttributesResponse : public RdsResponse {
    Q_OBJECT

public:
    DescribeDBSnapshotAttributesResponse(const DescribeDBSnapshotAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDBSnapshotAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDBSnapshotAttributesResponse)
    Q_DISABLE_COPY(DescribeDBSnapshotAttributesResponse)

};

} // namespace Rds
} // namespace QtAws

#endif
