// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSCHEDULESRESPONSE_H
#define QTAWS_DESCRIBESNAPSHOTSCHEDULESRESPONSE_H

#include "redshiftresponse.h"
#include "describesnapshotschedulesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeSnapshotSchedulesResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeSnapshotSchedulesResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeSnapshotSchedulesResponse(const DescribeSnapshotSchedulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSnapshotSchedulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSnapshotSchedulesResponse)
    Q_DISABLE_COPY(DescribeSnapshotSchedulesResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
