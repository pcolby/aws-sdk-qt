// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTSTRATEGYRESPONSE_H
#define QTAWS_GETDEPLOYMENTSTRATEGYRESPONSE_H

#include "appconfigresponse.h"
#include "getdeploymentstrategyrequest.h"

namespace QtAws {
namespace AppConfig {

class GetDeploymentStrategyResponsePrivate;

class QTAWSAPPCONFIG_EXPORT GetDeploymentStrategyResponse : public AppConfigResponse {
    Q_OBJECT

public:
    GetDeploymentStrategyResponse(const GetDeploymentStrategyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentStrategyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentStrategyResponse)
    Q_DISABLE_COPY(GetDeploymentStrategyResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
