// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGEDEPLOYMENTRESPONSE_H
#define QTAWS_GETSTAGEDEPLOYMENTRESPONSE_H

#include "gamesparksresponse.h"
#include "getstagedeploymentrequest.h"

namespace QtAws {
namespace GameSparks {

class GetStageDeploymentResponsePrivate;

class QTAWSGAMESPARKS_EXPORT GetStageDeploymentResponse : public GameSparksResponse {
    Q_OBJECT

public:
    GetStageDeploymentResponse(const GetStageDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStageDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStageDeploymentResponse)
    Q_DISABLE_COPY(GetStageDeploymentResponse)

};

} // namespace GameSparks
} // namespace QtAws

#endif
