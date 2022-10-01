// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMESESSIONLOGURLREQUEST_H
#define QTAWS_GETGAMESESSIONLOGURLREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class GetGameSessionLogUrlRequestPrivate;

class QTAWSGAMELIFT_EXPORT GetGameSessionLogUrlRequest : public GameLiftRequest {

public:
    GetGameSessionLogUrlRequest(const GetGameSessionLogUrlRequest &other);
    GetGameSessionLogUrlRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGameSessionLogUrlRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
