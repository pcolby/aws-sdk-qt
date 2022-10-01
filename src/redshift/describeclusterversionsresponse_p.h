// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLUSTERVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBECLUSTERVERSIONSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeClusterVersionsResponse;

class DescribeClusterVersionsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeClusterVersionsResponsePrivate(DescribeClusterVersionsResponse * const q);

    void parseDescribeClusterVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClusterVersionsResponse)
    Q_DISABLE_COPY(DescribeClusterVersionsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
