// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTTARGETRESPONSE_H
#define QTAWS_GETDEPLOYMENTTARGETRESPONSE_H

#include "codedeployresponse.h"
#include "getdeploymenttargetrequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentTargetResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT GetDeploymentTargetResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    GetDeploymentTargetResponse(const GetDeploymentTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentTargetResponse)
    Q_DISABLE_COPY(GetDeploymentTargetResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
