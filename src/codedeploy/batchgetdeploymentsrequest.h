// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTSREQUEST_H
#define QTAWS_BATCHGETDEPLOYMENTSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetDeploymentsRequest : public CodeDeployRequest {

public:
    BatchGetDeploymentsRequest(const BatchGetDeploymentsRequest &other);
    BatchGetDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDeploymentsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
