// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTRESPONSE_H
#define QTAWS_CREATEDEPLOYMENTRESPONSE_H

#include "codedeployresponse.h"
#include "createdeploymentrequest.h"

namespace QtAws {
namespace CodeDeploy {

class CreateDeploymentResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT CreateDeploymentResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    CreateDeploymentResponse(const CreateDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentResponse)
    Q_DISABLE_COPY(CreateDeploymentResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
