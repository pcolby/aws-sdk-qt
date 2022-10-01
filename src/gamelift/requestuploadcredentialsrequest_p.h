// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTUPLOADCREDENTIALSREQUEST_P_H
#define QTAWS_REQUESTUPLOADCREDENTIALSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "requestuploadcredentialsrequest.h"

namespace QtAws {
namespace GameLift {

class RequestUploadCredentialsRequest;

class RequestUploadCredentialsRequestPrivate : public GameLiftRequestPrivate {

public:
    RequestUploadCredentialsRequestPrivate(const GameLiftRequest::Action action,
                                   RequestUploadCredentialsRequest * const q);
    RequestUploadCredentialsRequestPrivate(const RequestUploadCredentialsRequestPrivate &other,
                                   RequestUploadCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RequestUploadCredentialsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
