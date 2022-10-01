// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLAYERSESSIONSREQUEST_H
#define QTAWS_CREATEPLAYERSESSIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class CreatePlayerSessionsRequestPrivate;

class QTAWSGAMELIFT_EXPORT CreatePlayerSessionsRequest : public GameLiftRequest {

public:
    CreatePlayerSessionsRequest(const CreatePlayerSessionsRequest &other);
    CreatePlayerSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePlayerSessionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
