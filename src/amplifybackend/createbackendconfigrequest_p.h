// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDCONFIGREQUEST_P_H
#define QTAWS_CREATEBACKENDCONFIGREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "createbackendconfigrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendConfigRequest;

class CreateBackendConfigRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    CreateBackendConfigRequestPrivate(const AmplifyBackendRequest::Action action,
                                   CreateBackendConfigRequest * const q);
    CreateBackendConfigRequestPrivate(const CreateBackendConfigRequestPrivate &other,
                                   CreateBackendConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackendConfigRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
