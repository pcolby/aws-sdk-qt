// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBELOGGINGSTATUSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeLoggingStatusResponse;

class DescribeLoggingStatusResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeLoggingStatusResponsePrivate(DescribeLoggingStatusResponse * const q);

    void parseDescribeLoggingStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingStatusResponse)
    Q_DISABLE_COPY(DescribeLoggingStatusResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
