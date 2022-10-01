// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEPLOYMENTJOBREQUEST_H
#define QTAWS_CREATEDEPLOYMENTJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CreateDeploymentJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT CreateDeploymentJobRequest : public RoboMakerRequest {

public:
    CreateDeploymentJobRequest(const CreateDeploymentJobRequest &other);
    CreateDeploymentJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeploymentJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
