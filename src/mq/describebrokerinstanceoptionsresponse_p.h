// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERINSTANCEOPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBEBROKERINSTANCEOPTIONSRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerInstanceOptionsResponse;

class DescribeBrokerInstanceOptionsResponsePrivate : public MqResponsePrivate {

public:

    explicit DescribeBrokerInstanceOptionsResponsePrivate(DescribeBrokerInstanceOptionsResponse * const q);

    void parseDescribeBrokerInstanceOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBrokerInstanceOptionsResponse)
    Q_DISABLE_COPY(DescribeBrokerInstanceOptionsResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
