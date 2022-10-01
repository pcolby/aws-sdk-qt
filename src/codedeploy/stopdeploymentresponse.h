// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPDEPLOYMENTRESPONSE_H
#define QTAWS_STOPDEPLOYMENTRESPONSE_H

#include "codedeployresponse.h"
#include "stopdeploymentrequest.h"

namespace QtAws {
namespace CodeDeploy {

class StopDeploymentResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT StopDeploymentResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    StopDeploymentResponse(const StopDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopDeploymentResponse)
    Q_DISABLE_COPY(StopDeploymentResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
