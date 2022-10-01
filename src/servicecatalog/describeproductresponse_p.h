// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTRESPONSE_P_H
#define QTAWS_DESCRIBEPRODUCTRESPONSE_P_H

#include "servicecatalogresponse_p.h"

namespace QtAws {
namespace ServiceCatalog {

class DescribeProductResponse;

class DescribeProductResponsePrivate : public ServiceCatalogResponsePrivate {

public:

    explicit DescribeProductResponsePrivate(DescribeProductResponse * const q);

    void parseDescribeProductResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProductResponse)
    Q_DISABLE_COPY(DescribeProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
