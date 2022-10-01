// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMATCHMAKINGRULESETREQUEST_H
#define QTAWS_DELETEMATCHMAKINGRULESETREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeleteMatchmakingRuleSetRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeleteMatchmakingRuleSetRequest : public GameLiftRequest {

public:
    DeleteMatchmakingRuleSetRequest(const DeleteMatchmakingRuleSetRequest &other);
    DeleteMatchmakingRuleSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMatchmakingRuleSetRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
