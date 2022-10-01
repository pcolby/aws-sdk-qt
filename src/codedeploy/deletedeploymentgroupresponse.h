// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEPLOYMENTGROUPRESPONSE_H
#define QTAWS_DELETEDEPLOYMENTGROUPRESPONSE_H

#include "codedeployresponse.h"
#include "deletedeploymentgrouprequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteDeploymentGroupResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT DeleteDeploymentGroupResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    DeleteDeploymentGroupResponse(const DeleteDeploymentGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeploymentGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentGroupResponse)
    Q_DISABLE_COPY(DeleteDeploymentGroupResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
