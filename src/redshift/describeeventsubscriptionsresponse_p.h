// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTSUBSCRIPTIONSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeEventSubscriptionsResponse;

class DescribeEventSubscriptionsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeEventSubscriptionsResponsePrivate(DescribeEventSubscriptionsResponse * const q);

    void parseDescribeEventSubscriptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventSubscriptionsResponse)
    Q_DISABLE_COPY(DescribeEventSubscriptionsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
