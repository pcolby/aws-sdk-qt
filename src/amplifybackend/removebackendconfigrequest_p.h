// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEBACKENDCONFIGREQUEST_P_H
#define QTAWS_REMOVEBACKENDCONFIGREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "removebackendconfigrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class RemoveBackendConfigRequest;

class RemoveBackendConfigRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    RemoveBackendConfigRequestPrivate(const AmplifyBackendRequest::Action action,
                                   RemoveBackendConfigRequest * const q);
    RemoveBackendConfigRequestPrivate(const RemoveBackendConfigRequestPrivate &other,
                                   RemoveBackendConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveBackendConfigRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
