// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDENVIRONMENTREQUEST_P_H
#define QTAWS_DELETEBACKENDENVIRONMENTREQUEST_P_H

#include "amplifyrequest_p.h"
#include "deletebackendenvironmentrequest.h"

namespace QtAws {
namespace Amplify {

class DeleteBackendEnvironmentRequest;

class DeleteBackendEnvironmentRequestPrivate : public AmplifyRequestPrivate {

public:
    DeleteBackendEnvironmentRequestPrivate(const AmplifyRequest::Action action,
                                   DeleteBackendEnvironmentRequest * const q);
    DeleteBackendEnvironmentRequestPrivate(const DeleteBackendEnvironmentRequestPrivate &other,
                                   DeleteBackendEnvironmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackendEnvironmentRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
