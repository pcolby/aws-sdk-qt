// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTSTRATEGYRESPONSE_H
#define QTAWS_UPDATEDEPLOYMENTSTRATEGYRESPONSE_H

#include "appconfigresponse.h"
#include "updatedeploymentstrategyrequest.h"

namespace QtAws {
namespace AppConfig {

class UpdateDeploymentStrategyResponsePrivate;

class QTAWSAPPCONFIG_EXPORT UpdateDeploymentStrategyResponse : public AppConfigResponse {
    Q_OBJECT

public:
    UpdateDeploymentStrategyResponse(const UpdateDeploymentStrategyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeploymentStrategyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeploymentStrategyResponse)
    Q_DISABLE_COPY(UpdateDeploymentStrategyResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
