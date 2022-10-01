// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEACCESSREQUEST_P_H
#define QTAWS_GETINSTANCEACCESSREQUEST_P_H

#include "gameliftrequest_p.h"
#include "getinstanceaccessrequest.h"

namespace QtAws {
namespace GameLift {

class GetInstanceAccessRequest;

class GetInstanceAccessRequestPrivate : public GameLiftRequestPrivate {

public:
    GetInstanceAccessRequestPrivate(const GameLiftRequest::Action action,
                                   GetInstanceAccessRequest * const q);
    GetInstanceAccessRequestPrivate(const GetInstanceAccessRequestPrivate &other,
                                   GetInstanceAccessRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceAccessRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
