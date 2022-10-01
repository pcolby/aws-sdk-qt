// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSRESPONSE_P_H
#define QTAWS_DESCRIBEADDRESSRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class DescribeAddressResponse;

class DescribeAddressResponsePrivate : public SnowballResponsePrivate {

public:

    explicit DescribeAddressResponsePrivate(DescribeAddressResponse * const q);

    void parseDescribeAddressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAddressResponse)
    Q_DISABLE_COPY(DescribeAddressResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
