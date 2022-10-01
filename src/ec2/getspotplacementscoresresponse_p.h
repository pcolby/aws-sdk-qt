// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSPOTPLACEMENTSCORESRESPONSE_P_H
#define QTAWS_GETSPOTPLACEMENTSCORESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetSpotPlacementScoresResponse;

class GetSpotPlacementScoresResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetSpotPlacementScoresResponsePrivate(GetSpotPlacementScoresResponse * const q);

    void parseGetSpotPlacementScoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSpotPlacementScoresResponse)
    Q_DISABLE_COPY(GetSpotPlacementScoresResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
