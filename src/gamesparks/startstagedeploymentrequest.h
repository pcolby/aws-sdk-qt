// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTAGEDEPLOYMENTREQUEST_H
#define QTAWS_STARTSTAGEDEPLOYMENTREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class StartStageDeploymentRequestPrivate;

class QTAWSGAMESPARKS_EXPORT StartStageDeploymentRequest : public GameSparksRequest {

public:
    StartStageDeploymentRequest(const StartStageDeploymentRequest &other);
    StartStageDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStageDeploymentRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
