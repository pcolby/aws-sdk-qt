// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESNAPSHOTCOPYGRANTSRESPONSE_P_H
#define QTAWS_DESCRIBESNAPSHOTCOPYGRANTSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeSnapshotCopyGrantsResponse;

class DescribeSnapshotCopyGrantsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeSnapshotCopyGrantsResponsePrivate(DescribeSnapshotCopyGrantsResponse * const q);

    void parseDescribeSnapshotCopyGrantsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSnapshotCopyGrantsResponse)
    Q_DISABLE_COPY(DescribeSnapshotCopyGrantsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
