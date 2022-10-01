// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTGROUPRESPONSE_H
#define QTAWS_GETDEPLOYMENTGROUPRESPONSE_H

#include "codedeployresponse.h"
#include "getdeploymentgrouprequest.h"

namespace QtAws {
namespace CodeDeploy {

class GetDeploymentGroupResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT GetDeploymentGroupResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    GetDeploymentGroupResponse(const GetDeploymentGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeploymentGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentGroupResponse)
    Q_DISABLE_COPY(GetDeploymentGroupResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
