// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEUSERREQUEST_P_H
#define QTAWS_DISABLEUSERREQUEST_P_H

#include "appstreamrequest_p.h"
#include "disableuserrequest.h"

namespace QtAws {
namespace AppStream {

class DisableUserRequest;

class DisableUserRequestPrivate : public AppStreamRequestPrivate {

public:
    DisableUserRequestPrivate(const AppStreamRequest::Action action,
                                   DisableUserRequest * const q);
    DisableUserRequestPrivate(const DisableUserRequestPrivate &other,
                                   DisableUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableUserRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
