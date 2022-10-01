// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMATCHMAKINGRULESETREQUEST_H
#define QTAWS_CREATEMATCHMAKINGRULESETREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class CreateMatchmakingRuleSetRequestPrivate;

class QTAWSGAMELIFT_EXPORT CreateMatchmakingRuleSetRequest : public GameLiftRequest {

public:
    CreateMatchmakingRuleSetRequest(const CreateMatchmakingRuleSetRequest &other);
    CreateMatchmakingRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMatchmakingRuleSetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
