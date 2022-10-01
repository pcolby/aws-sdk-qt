// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORDERABLECLUSTEROPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEORDERABLECLUSTEROPTIONSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeOrderableClusterOptionsResponse;

class DescribeOrderableClusterOptionsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeOrderableClusterOptionsResponsePrivate(DescribeOrderableClusterOptionsResponse * const q);

    void parseDescribeOrderableClusterOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrderableClusterOptionsResponse)
    Q_DISABLE_COPY(DescribeOrderableClusterOptionsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
