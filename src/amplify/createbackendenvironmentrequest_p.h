// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDENVIRONMENTREQUEST_P_H
#define QTAWS_CREATEBACKENDENVIRONMENTREQUEST_P_H

#include "amplifyrequest_p.h"
#include "createbackendenvironmentrequest.h"

namespace QtAws {
namespace Amplify {

class CreateBackendEnvironmentRequest;

class CreateBackendEnvironmentRequestPrivate : public AmplifyRequestPrivate {

public:
    CreateBackendEnvironmentRequestPrivate(const AmplifyRequest::Action action,
                                   CreateBackendEnvironmentRequest * const q);
    CreateBackendEnvironmentRequestPrivate(const CreateBackendEnvironmentRequestPrivate &other,
                                   CreateBackendEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackendEnvironmentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
