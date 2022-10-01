// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMESESSIONREQUEST_H
#define QTAWS_CREATEGAMESESSIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class CreateGameSessionRequestPrivate;

class QTAWSGAMELIFT_EXPORT CreateGameSessionRequest : public GameLiftRequest {

public:
    CreateGameSessionRequest(const CreateGameSessionRequest &other);
    CreateGameSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGameSessionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
