// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLAIMGAMESERVERREQUEST_H
#define QTAWS_CLAIMGAMESERVERREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class ClaimGameServerRequestPrivate;

class QTAWSGAMELIFT_EXPORT ClaimGameServerRequest : public GameLiftRequest {

public:
    ClaimGameServerRequest(const ClaimGameServerRequest &other);
    ClaimGameServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ClaimGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
