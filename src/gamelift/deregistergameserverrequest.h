// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERGAMESERVERREQUEST_H
#define QTAWS_DEREGISTERGAMESERVERREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DeregisterGameServerRequestPrivate;

class QTAWSGAMELIFT_EXPORT DeregisterGameServerRequest : public GameLiftRequest {

public:
    DeregisterGameServerRequest(const DeregisterGameServerRequest &other);
    DeregisterGameServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
