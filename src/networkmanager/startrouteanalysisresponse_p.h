// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTROUTEANALYSISRESPONSE_P_H
#define QTAWS_STARTROUTEANALYSISRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class StartRouteAnalysisResponse;

class StartRouteAnalysisResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit StartRouteAnalysisResponsePrivate(StartRouteAnalysisResponse * const q);

    void parseStartRouteAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartRouteAnalysisResponse)
    Q_DISABLE_COPY(StartRouteAnalysisResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
