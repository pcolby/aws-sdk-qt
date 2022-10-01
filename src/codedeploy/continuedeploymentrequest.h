// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTINUEDEPLOYMENTREQUEST_H
#define QTAWS_CONTINUEDEPLOYMENTREQUEST_H

#include "codedeployrequest.h"

namespace QtAws {
namespace CodeDeploy {

class ContinueDeploymentRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT ContinueDeploymentRequest : public CodeDeployRequest {

public:
    ContinueDeploymentRequest(const ContinueDeploymentRequest &other);
    ContinueDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ContinueDeploymentRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
