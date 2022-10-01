// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEADDRESSESRESPONSE_P_H
#define QTAWS_DESCRIBEADDRESSESRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class DescribeAddressesResponse;

class DescribeAddressesResponsePrivate : public SnowballResponsePrivate {

public:

    explicit DescribeAddressesResponsePrivate(DescribeAddressesResponse * const q);

    void parseDescribeAddressesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAddressesResponse)
    Q_DISABLE_COPY(DescribeAddressesResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
