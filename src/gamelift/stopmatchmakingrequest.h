// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPMATCHMAKINGREQUEST_H
#define QTAWS_STOPMATCHMAKINGREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class StopMatchmakingRequestPrivate;

class QTAWSGAMELIFT_EXPORT StopMatchmakingRequest : public GameLiftRequest {

public:
    StopMatchmakingRequest(const StopMatchmakingRequest &other);
    StopMatchmakingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopMatchmakingRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
