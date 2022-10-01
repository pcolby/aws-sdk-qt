// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEPLOYMENTREQUEST_H
#define QTAWS_STARTDEPLOYMENTREQUEST_H

#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class StartDeploymentRequestPrivate;

class QTAWSAPPRUNNER_EXPORT StartDeploymentRequest : public AppRunnerRequest {

public:
    StartDeploymentRequest(const StartDeploymentRequest &other);
    StartDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeploymentRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
