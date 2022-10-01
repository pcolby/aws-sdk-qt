// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONDETAILSRESPONSE_P_H
#define QTAWS_DESCRIBEGAMESESSIONDETAILSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionDetailsResponse;

class DescribeGameSessionDetailsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeGameSessionDetailsResponsePrivate(DescribeGameSessionDetailsResponse * const q);

    void parseDescribeGameSessionDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGameSessionDetailsResponse)
    Q_DISABLE_COPY(DescribeGameSessionDetailsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
