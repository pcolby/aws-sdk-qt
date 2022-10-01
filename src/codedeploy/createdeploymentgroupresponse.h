// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTGROUPRESPONSE_H
#define QTAWS_CREATEDEPLOYMENTGROUPRESPONSE_H

#include "codedeployresponse.h"
#include "createdeploymentgrouprequest.h"

namespace QtAws {
namespace CodeDeploy {

class CreateDeploymentGroupResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT CreateDeploymentGroupResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    CreateDeploymentGroupResponse(const CreateDeploymentGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeploymentGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentGroupResponse)
    Q_DISABLE_COPY(CreateDeploymentGroupResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
