// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMATCHMAKINGCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEMATCHMAKINGCONFIGURATIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateMatchmakingConfigurationRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateMatchmakingConfigurationRequest : public GameLiftRequest {

public:
    UpdateMatchmakingConfigurationRequest(const UpdateMatchmakingConfigurationRequest &other);
    UpdateMatchmakingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMatchmakingConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
