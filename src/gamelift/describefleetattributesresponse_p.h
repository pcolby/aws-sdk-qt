// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETATTRIBUTESRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetAttributesResponse;

class DescribeFleetAttributesResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeFleetAttributesResponsePrivate(DescribeFleetAttributesResponse * const q);

    void parseDescribeFleetAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAttributesResponse)
    Q_DISABLE_COPY(DescribeFleetAttributesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
