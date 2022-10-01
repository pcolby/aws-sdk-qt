// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTSRESPONSE_H
#define QTAWS_BATCHGETDEPLOYMENTSRESPONSE_H

#include "codedeployresponse.h"
#include "batchgetdeploymentsrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentsResponsePrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetDeploymentsResponse : public CodeDeployResponse {
    Q_OBJECT

public:
    BatchGetDeploymentsResponse(const BatchGetDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDeploymentsResponse)
    Q_DISABLE_COPY(BatchGetDeploymentsResponse)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
