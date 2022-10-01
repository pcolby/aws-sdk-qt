// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTCONFIGRESPONSE_H
#define QTAWS_GETDEPLOYMENTCONFIGRESPONSE_H

#include "codedeployresponse.h"
#include "getdeploymentconfigrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentConfigResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT GetDeploymentConfigResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    GetDeploymentConfigResponse(const GetDeploymentConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentConfigResponse)
    Q_DISABLE_COPY(GetDeploymentConfigResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
