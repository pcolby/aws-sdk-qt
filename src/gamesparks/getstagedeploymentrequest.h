// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGEDEPLOYMENTREQUEST_H
#define QTAWS_GETSTAGEDEPLOYMENTREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GetStageDeploymentRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GetStageDeploymentRequest : public GameSparksRequest {

public:
    GetStageDeploymentRequest(const GetStageDeploymentRequest &other);
    GetStageDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStageDeploymentRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
