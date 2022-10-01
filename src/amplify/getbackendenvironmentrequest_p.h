// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDENVIRONMENTREQUEST_P_H
#define QTAWS_GETBACKENDENVIRONMENTREQUEST_P_H

#include "amplifyrequest_p.h"
#include "getbackendenvironmentrequest.h"

namespace QtAws {
namespace Amplify {

class GetBackendEnvironmentRequest;

class GetBackendEnvironmentRequestPrivate : public AmplifyRequestPrivate {

public:
    GetBackendEnvironmentRequestPrivate(const AmplifyRequest::Action action,
                                   GetBackendEnvironmentRequest * const q);
    GetBackendEnvironmentRequestPrivate(const GetBackendEnvironmentRequestPrivate &other,
                                   GetBackendEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackendEnvironmentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
