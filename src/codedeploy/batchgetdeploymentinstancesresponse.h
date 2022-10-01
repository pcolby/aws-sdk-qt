// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTINSTANCESRESPONSE_H
#define QTAWS_BATCHGETDEPLOYMENTINSTANCESRESPONSE_H

#include "codedeployresponse.h"
#include "batchgetdeploymentinstancesrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentInstancesResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetDeploymentInstancesResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    BatchGetDeploymentInstancesResponse(const BatchGetDeploymentInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetDeploymentInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDeploymentInstancesResponse)
    Q_DISABLE_COPY(BatchGetDeploymentInstancesResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
