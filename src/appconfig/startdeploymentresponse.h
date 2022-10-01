// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTRESPONSE_H
#define QTAWS_STARTDEPLOYMENTRESPONSE_H

#include "appconfigresponse.h"
#include "startdeploymentrequest.h"

namespace QtAws {
namespace AppConfig {

class StartDeploymentResponsePrivate;

class QTAWSAPPCONFIG_EXPORT StartDeploymentResponse : public AppConfigResponse {
    Q_OBJECT

public:
    StartDeploymentResponse(const StartDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeploymentResponse)
    Q_DISABLE_COPY(StartDeploymentResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
