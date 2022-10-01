// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROUTEANALYSISRESPONSE_H
#define QTAWS_GETROUTEANALYSISRESPONSE_H

#include "networkmanagerresponse.h"
#include "getrouteanalysisrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetRouteAnalysisResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT GetRouteAnalysisResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    GetRouteAnalysisResponse(const GetRouteAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRouteAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRouteAnalysisResponse)
    Q_DISABLE_COPY(GetRouteAnalysisResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
