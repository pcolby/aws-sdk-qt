// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETPORTSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETPORTSETTINGSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetPortSettingsResponse;

class DescribeFleetPortSettingsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DescribeFleetPortSettingsResponsePrivate(DescribeFleetPortSettingsResponse * const q);

    void parseDescribeFleetPortSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetPortSettingsResponse)
    Q_DISABLE_COPY(DescribeFleetPortSettingsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
