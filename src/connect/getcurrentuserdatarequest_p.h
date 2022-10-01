// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCURRENTUSERDATAREQUEST_P_H
#define QTAWS_GETCURRENTUSERDATAREQUEST_P_H

#include "connectrequest_p.h"
#include "getcurrentuserdatarequest.h"

namespace QtAws {
namespace Connect {

class GetCurrentUserDataRequest;

class GetCurrentUserDataRequestPrivate : public ConnectRequestPrivate {

public:
    GetCurrentUserDataRequestPrivate(const ConnectRequest::Action action,
                                   GetCurrentUserDataRequest * const q);
    GetCurrentUserDataRequestPrivate(const GetCurrentUserDataRequestPrivate &other,
                                   GetCurrentUserDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCurrentUserDataRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
