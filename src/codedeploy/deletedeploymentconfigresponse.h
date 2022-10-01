// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTCONFIGRESPONSE_H
#define QTAWS_DELETEDEPLOYMENTCONFIGRESPONSE_H

#include "codedeployresponse.h"
#include "deletedeploymentconfigrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteDeploymentConfigResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT DeleteDeploymentConfigResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    DeleteDeploymentConfigResponse(const DeleteDeploymentConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeploymentConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentConfigResponse)
    Q_DISABLE_COPY(DeleteDeploymentConfigResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
