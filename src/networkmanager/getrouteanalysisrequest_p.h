// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTEANALYSISREQUEST_P_H
#define QTAWS_GETROUTEANALYSISREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getrouteanalysisrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetRouteAnalysisRequest;

class GetRouteAnalysisRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetRouteAnalysisRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetRouteAnalysisRequest * const q);
    GetRouteAnalysisRequestPrivate(const GetRouteAnalysisRequestPrivate &other,
                                   GetRouteAnalysisRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRouteAnalysisRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
