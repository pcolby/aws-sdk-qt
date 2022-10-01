// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTTARGETSRESPONSE_H
#define QTAWS_BATCHGETDEPLOYMENTTARGETSRESPONSE_H

#include "codedeployresponse.h"
#include "batchgetdeploymenttargetsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentTargetsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetDeploymentTargetsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    BatchGetDeploymentTargetsResponse(const BatchGetDeploymentTargetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetDeploymentTargetsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDeploymentTargetsResponse)
    Q_DISABLE_COPY(BatchGetDeploymentTargetsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
