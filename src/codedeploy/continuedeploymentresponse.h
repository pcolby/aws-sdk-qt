// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTINUEDEPLOYMENTRESPONSE_H
#define QTAWS_CONTINUEDEPLOYMENTRESPONSE_H

#include "codedeployresponse.h"
#include "continuedeploymentrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ContinueDeploymentResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT ContinueDeploymentResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    ContinueDeploymentResponse(const ContinueDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ContinueDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ContinueDeploymentResponse)
    Q_DISABLE_COPY(ContinueDeploymentResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
