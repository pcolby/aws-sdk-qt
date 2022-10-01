// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBROKERRESPONSE_P_H
#define QTAWS_DESCRIBEBROKERRESPONSE_P_H

#include "mqresponse_p.h"

namespace QtAws {
namespace Mq {

class DescribeBrokerResponse;

class DescribeBrokerResponsePrivate : public MqResponsePrivate {

public:

    explicit DescribeBrokerResponsePrivate(DescribeBrokerResponse * const q);

    void parseDescribeBrokerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeBrokerResponse)
    Q_DISABLE_COPY(DescribeBrokerResponsePrivate)

};

} // namespace Mq
} // namespace QtAws

#endif
