// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTEANALYSISREQUEST_H
#define QTAWS_GETROUTEANALYSISREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetRouteAnalysisRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT GetRouteAnalysisRequest : public NetworkManagerRequest {

public:
    GetRouteAnalysisRequest(const GetRouteAnalysisRequest &other);
    GetRouteAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteAnalysisRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
