// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTSTRATEGYRESPONSE_H
#define QTAWS_CREATEDEPLOYMENTSTRATEGYRESPONSE_H

#include "appconfigresponse.h"
#include "createdeploymentstrategyrequest.h"

namespace QtAws {
namespace AppConfig {

class CreateDeploymentStrategyResponsePrivate;

class QTAWSAPPCONFIG_EXPORT CreateDeploymentStrategyResponse : public AppConfigResponse {
    Q_OBJECT

public:
    CreateDeploymentStrategyResponse(const CreateDeploymentStrategyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeploymentStrategyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentStrategyResponse)
    Q_DISABLE_COPY(CreateDeploymentStrategyResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
