// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDEPLOYMENTJOBREQUEST_H
#define QTAWS_CANCELDEPLOYMENTJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelDeploymentJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT CancelDeploymentJobRequest : public RoboMakerRequest {

public:
    CancelDeploymentJobRequest(const CancelDeploymentJobRequest &other);
    CancelDeploymentJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDeploymentJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
