// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTACCESSRESPONSE_P_H
#define QTAWS_DESCRIBEENDPOINTACCESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeEndpointAccessResponse;

class DescribeEndpointAccessResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeEndpointAccessResponsePrivate(DescribeEndpointAccessResponse * const q);

    void parseDescribeEndpointAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointAccessResponse)
    Q_DISABLE_COPY(DescribeEndpointAccessResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
