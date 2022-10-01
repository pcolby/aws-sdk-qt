// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTCATEGORIESRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTCATEGORIESRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeEventCategoriesResponse;

class DescribeEventCategoriesResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeEventCategoriesResponsePrivate(DescribeEventCategoriesResponse * const q);

    void parseDescribeEventCategoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventCategoriesResponse)
    Q_DISABLE_COPY(DescribeEventCategoriesResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
