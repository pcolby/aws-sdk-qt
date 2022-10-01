// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMATCHMAKINGCONFIGURATIONREQUEST_H
#define QTAWS_CREATEMATCHMAKINGCONFIGURATIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class CreateMatchmakingConfigurationRequestPrivate;

class QTAWSGAMELIFT_EXPORT CreateMatchmakingConfigurationRequest : public GameLiftRequest {

public:
    CreateMatchmakingConfigurationRequest(const CreateMatchmakingConfigurationRequest &other);
    CreateMatchmakingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMatchmakingConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
