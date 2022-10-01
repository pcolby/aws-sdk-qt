// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESIZERESPONSE_P_H
#define QTAWS_DESCRIBERESIZERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeResizeResponse;

class DescribeResizeResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeResizeResponsePrivate(DescribeResizeResponse * const q);

    void parseDescribeResizeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResizeResponse)
    Q_DISABLE_COPY(DescribeResizeResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
