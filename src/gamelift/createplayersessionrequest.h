// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLAYERSESSIONREQUEST_H
#define QTAWS_CREATEPLAYERSESSIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class CreatePlayerSessionRequestPrivate;

class QTAWSGAMELIFT_EXPORT CreatePlayerSessionRequest : public GameLiftRequest {

public:
    CreatePlayerSessionRequest(const CreatePlayerSessionRequest &other);
    CreatePlayerSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlayerSessionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
