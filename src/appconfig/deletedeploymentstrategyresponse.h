// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTSTRATEGYRESPONSE_H
#define QTAWS_DELETEDEPLOYMENTSTRATEGYRESPONSE_H

#include "appconfigresponse.h"
#include "deletedeploymentstrategyrequest.h"

namespace QtAws {
namespace AppConfig {

class DeleteDeploymentStrategyResponsePrivate;

class QTAWSAPPCONFIG_EXPORT DeleteDeploymentStrategyResponse : public AppConfigResponse {
    Q_OBJECT

public:
    DeleteDeploymentStrategyResponse(const DeleteDeploymentStrategyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeploymentStrategyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentStrategyResponse)
    Q_DISABLE_COPY(DeleteDeploymentStrategyResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
