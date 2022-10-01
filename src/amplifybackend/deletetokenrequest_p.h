// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETOKENREQUEST_P_H
#define QTAWS_DELETETOKENREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "deletetokenrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteTokenRequest;

class DeleteTokenRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    DeleteTokenRequestPrivate(const AmplifyBackendRequest::Action action,
                                   DeleteTokenRequest * const q);
    DeleteTokenRequestPrivate(const DeleteTokenRequestPrivate &other,
                                   DeleteTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTokenRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
