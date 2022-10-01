// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTRESPONSE_H
#define QTAWS_STARTDEPLOYMENTRESPONSE_H

#include "amplifyresponse.h"
#include "startdeploymentrequest.h"

namespace QtAws {
namespace Amplify {

class StartDeploymentResponsePrivate;

class QTAWSAMPLIFY_EXPORT StartDeploymentResponse : public AmplifyResponse {
    Q_OBJECT

public:
    StartDeploymentResponse(const StartDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDeploymentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeploymentResponse)
    Q_DISABLE_COPY(StartDeploymentResponse)

};

} // namespace Amplify
} // namespace QtAws

#endif
