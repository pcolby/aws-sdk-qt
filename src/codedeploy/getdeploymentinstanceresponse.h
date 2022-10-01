// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTINSTANCERESPONSE_H
#define QTAWS_GETDEPLOYMENTINSTANCERESPONSE_H

#include "codedeployresponse.h"
#include "getdeploymentinstancerequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentInstanceResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT GetDeploymentInstanceResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    GetDeploymentInstanceResponse(const GetDeploymentInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentInstanceResponse)
    Q_DISABLE_COPY(GetDeploymentInstanceResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
