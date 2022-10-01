// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETABLERESTORESTATUSRESPONSE_P_H
#define QTAWS_DESCRIBETABLERESTORESTATUSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeTableRestoreStatusResponse;

class DescribeTableRestoreStatusResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeTableRestoreStatusResponsePrivate(DescribeTableRestoreStatusResponse * const q);

    void parseDescribeTableRestoreStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTableRestoreStatusResponse)
    Q_DISABLE_COPY(DescribeTableRestoreStatusResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
