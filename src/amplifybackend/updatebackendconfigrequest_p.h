// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDCONFIGREQUEST_P_H
#define QTAWS_UPDATEBACKENDCONFIGREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "updatebackendconfigrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendConfigRequest;

class UpdateBackendConfigRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    UpdateBackendConfigRequestPrivate(const AmplifyBackendRequest::Action action,
                                   UpdateBackendConfigRequest * const q);
    UpdateBackendConfigRequestPrivate(const UpdateBackendConfigRequestPrivate &other,
                                   UpdateBackendConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBackendConfigRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
