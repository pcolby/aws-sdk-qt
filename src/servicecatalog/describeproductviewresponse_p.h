// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTVIEWRESPONSE_P_H
#define QTAWS_DESCRIBEPRODUCTVIEWRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductViewResponse;

class DescribeProductViewResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeProductViewResponsePrivate(DescribeProductViewResponse * const q);

    void parseDescribeProductViewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProductViewResponse)
    Q_DISABLE_COPY(DescribeProductViewResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
