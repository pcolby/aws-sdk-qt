// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTROUTEANALYSISREQUEST_H
#define QTAWS_STARTROUTEANALYSISREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class StartRouteAnalysisRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT StartRouteAnalysisRequest : public NetworkManagerRequest {

public:
    StartRouteAnalysisRequest(const StartRouteAnalysisRequest &other);
    StartRouteAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRouteAnalysisRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
