// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEPLOYMENTTARGETSREQUEST_H
#define QTAWS_BATCHGETDEPLOYMENTTARGETSREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class BatchGetDeploymentTargetsRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT BatchGetDeploymentTargetsRequest : public CodeDeployRequest {

public:
    BatchGetDeploymentTargetsRequest(const BatchGetDeploymentTargetsRequest &other);
    BatchGetDeploymentTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDeploymentTargetsRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
