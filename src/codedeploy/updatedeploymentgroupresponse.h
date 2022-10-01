// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEPLOYMENTGROUPRESPONSE_H
#define QTAWS_UPDATEDEPLOYMENTGROUPRESPONSE_H

#include "codedeployresponse.h"
#include "updatedeploymentgrouprequest.h"

namespace QtAws {
namespace CodeDeploy {

class UpdateDeploymentGroupResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT UpdateDeploymentGroupResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    UpdateDeploymentGroupResponse(const UpdateDeploymentGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeploymentGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeploymentGroupResponse)
    Q_DISABLE_COPY(UpdateDeploymentGroupResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
