// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTCONFIGRESPONSE_H
#define QTAWS_CREATEDEPLOYMENTCONFIGRESPONSE_H

#include "codedeployresponse.h"
#include "createdeploymentconfigrequest.h"

namespace QtAws {
namespace CodeDeploy {

class CreateDeploymentConfigResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT CreateDeploymentConfigResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    CreateDeploymentConfigResponse(const CreateDeploymentConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeploymentConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentConfigResponse)
    Q_DISABLE_COPY(CreateDeploymentConfigResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
