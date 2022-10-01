// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTEANALYSISRESPONSE_P_H
#define QTAWS_GETROUTEANALYSISRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetRouteAnalysisResponse;

class GetRouteAnalysisResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetRouteAnalysisResponsePrivate(GetRouteAnalysisResponse * const q);

    void parseGetRouteAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRouteAnalysisResponse)
    Q_DISABLE_COPY(GetRouteAnalysisResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
