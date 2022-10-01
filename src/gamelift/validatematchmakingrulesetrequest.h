// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATEMATCHMAKINGRULESETREQUEST_H
#define QTAWS_VALIDATEMATCHMAKINGRULESETREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class ValidateMatchmakingRuleSetRequestPrivate;

class QTAWSGAMELIFT_EXPORT ValidateMatchmakingRuleSetRequest : public GameLiftRequest {

public:
    ValidateMatchmakingRuleSetRequest(const ValidateMatchmakingRuleSetRequest &other);
    ValidateMatchmakingRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ValidateMatchmakingRuleSetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
