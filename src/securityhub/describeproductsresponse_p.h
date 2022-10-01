// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPRODUCTSRESPONSE_P_H
#define QTAWS_DESCRIBEPRODUCTSRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DescribeProductsResponse;

class DescribeProductsResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DescribeProductsResponsePrivate(DescribeProductsResponse * const q);

    void parseDescribeProductsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProductsResponse)
    Q_DISABLE_COPY(DescribeProductsResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
