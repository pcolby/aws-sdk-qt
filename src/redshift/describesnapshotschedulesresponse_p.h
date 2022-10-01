// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTSCHEDULESRESPONSE_P_H
#define QTAWS_DESCRIBESNAPSHOTSCHEDULESRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeSnapshotSchedulesResponse;

class DescribeSnapshotSchedulesResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeSnapshotSchedulesResponsePrivate(DescribeSnapshotSchedulesResponse * const q);

    void parseDescribeSnapshotSchedulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotSchedulesResponse)
    Q_DISABLE_COPY(DescribeSnapshotSchedulesResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
