// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETLOCATIONATTRIBUTESRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationAttributesResponse;

class DescribeFleetLocationAttributesResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeFleetLocationAttributesResponsePrivate(DescribeFleetLocationAttributesResponse * const q);

    void parseDescribeFleetLocationAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetLocationAttributesResponse)
    Q_DISABLE_COPY(DescribeFleetLocationAttributesResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
