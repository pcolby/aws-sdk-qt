// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTGROUPSRESPONSE_H
#define QTAWS_BATCHGETDEPLOYMENTGROUPSRESPONSE_H

#include "codedeployresponse.h"
#include "batchgetdeploymentgroupsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentGroupsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetDeploymentGroupsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    BatchGetDeploymentGroupsResponse(const BatchGetDeploymentGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetDeploymentGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDeploymentGroupsResponse)
    Q_DISABLE_COPY(BatchGetDeploymentGroupsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
