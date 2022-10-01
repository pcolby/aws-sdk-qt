// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTREQUEST_H
#define QTAWS_STARTDEPLOYMENTREQUEST_H

#include "amplifyrequest.h"

namespace QtAws {
namespace Amplify {

class StartDeploymentRequestPrivate;

class QTAWSAMPLIFY_EXPORT StartDeploymentRequest : public AmplifyRequest {

public:
    StartDeploymentRequest(const StartDeploymentRequest &other);
    StartDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeploymentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
