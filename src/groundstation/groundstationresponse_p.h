// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUNDSTATIONRESPONSE_P_H
#define QTAWS_GROUNDSTATIONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace GroundStation {

class GroundStationResponse;

class GroundStationResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GroundStationResponsePrivate(GroundStationResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GroundStationResponse)
    Q_DISABLE_COPY(GroundStationResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
