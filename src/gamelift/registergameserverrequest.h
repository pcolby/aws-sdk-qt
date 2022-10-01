// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERGAMESERVERREQUEST_H
#define QTAWS_REGISTERGAMESERVERREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class RegisterGameServerRequestPrivate;

class QTAWSGAMELIFT_EXPORT RegisterGameServerRequest : public GameLiftRequest {

public:
    RegisterGameServerRequest(const RegisterGameServerRequest &other);
    RegisterGameServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
