// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERDBREVISIONSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERDBREVISIONSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterDbRevisionsResponse;

class DescribeClusterDbRevisionsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeClusterDbRevisionsResponsePrivate(DescribeClusterDbRevisionsResponse * const q);

    void parseDescribeClusterDbRevisionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterDbRevisionsResponse)
    Q_DISABLE_COPY(DescribeClusterDbRevisionsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
