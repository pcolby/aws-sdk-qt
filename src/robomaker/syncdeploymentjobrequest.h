// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNCDEPLOYMENTJOBREQUEST_H
#define QTAWS_SYNCDEPLOYMENTJOBREQUEST_H

#include "robomakerrequest.h"

namespace QtAws {
namespace RoboMaker {

class SyncDeploymentJobRequestPrivate;

class QTAWSROBOMAKER_EXPORT SyncDeploymentJobRequest : public RoboMakerRequest {

public:
    SyncDeploymentJobRequest(const SyncDeploymentJobRequest &other);
    SyncDeploymentJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SyncDeploymentJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
