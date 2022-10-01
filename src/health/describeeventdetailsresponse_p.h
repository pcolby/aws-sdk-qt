// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTDETAILSRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTDETAILSRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeEventDetailsResponse;

class DescribeEventDetailsResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeEventDetailsResponsePrivate(DescribeEventDetailsResponse * const q);

    void parseDescribeEventDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventDetailsResponse)
    Q_DISABLE_COPY(DescribeEventDetailsResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
