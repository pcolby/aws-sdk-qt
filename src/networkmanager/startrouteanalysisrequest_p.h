// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTROUTEANALYSISREQUEST_P_H
#define QTAWS_STARTROUTEANALYSISREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "startrouteanalysisrequest.h"

namespace QtAws {
namespace NetworkManager {

class StartRouteAnalysisRequest;

class StartRouteAnalysisRequestPrivate : public NetworkManagerRequestPrivate {

public:
    StartRouteAnalysisRequestPrivate(const NetworkManagerRequest::Action action,
                                   StartRouteAnalysisRequest * const q);
    StartRouteAnalysisRequestPrivate(const StartRouteAnalysisRequestPrivate &other,
                                   StartRouteAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartRouteAnalysisRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
