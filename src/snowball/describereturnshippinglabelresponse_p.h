// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERETURNSHIPPINGLABELRESPONSE_P_H
#define QTAWS_DESCRIBERETURNSHIPPINGLABELRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class DescribeReturnShippingLabelResponse;

class DescribeReturnShippingLabelResponsePrivate : public SnowballResponsePrivate {

public:

    explicit DescribeReturnShippingLabelResponsePrivate(DescribeReturnShippingLabelResponse * const q);

    void parseDescribeReturnShippingLabelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeReturnShippingLabelResponse)
    Q_DISABLE_COPY(DescribeReturnShippingLabelResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
