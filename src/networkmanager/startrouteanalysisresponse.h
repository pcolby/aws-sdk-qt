// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTROUTEANALYSISRESPONSE_H
#define QTAWS_STARTROUTEANALYSISRESPONSE_H

#include "networkmanagerresponse.h"
#include "startrouteanalysisrequest.h"

namespace QtAws {
namespace NetworkManager {

class StartRouteAnalysisResponsePrivate;

class QTAWSNETWORKMANAGER_EXPORT StartRouteAnalysisResponse : public NetworkManagerResponse {
    Q_OBJECT

public:
    StartRouteAnalysisResponse(const StartRouteAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartRouteAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartRouteAnalysisResponse)
    Q_DISABLE_COPY(StartRouteAnalysisResponse)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
