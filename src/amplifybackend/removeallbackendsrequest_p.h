// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEALLBACKENDSREQUEST_P_H
#define QTAWS_REMOVEALLBACKENDSREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "removeallbackendsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class RemoveAllBackendsRequest;

class RemoveAllBackendsRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    RemoveAllBackendsRequestPrivate(const AmplifyBackendRequest::Action action,
                                   RemoveAllBackendsRequest * const q);
    RemoveAllBackendsRequestPrivate(const RemoveAllBackendsRequestPrivate &other,
                                   RemoveAllBackendsRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveAllBackendsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
