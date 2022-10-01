// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDAPIREQUEST_P_H
#define QTAWS_CREATEBACKENDAPIREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "createbackendapirequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendAPIRequest;

class CreateBackendAPIRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    CreateBackendAPIRequestPrivate(const AmplifyBackendRequest::Action action,
                                   CreateBackendAPIRequest * const q);
    CreateBackendAPIRequestPrivate(const CreateBackendAPIRequestPrivate &other,
                                   CreateBackendAPIRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateBackendAPIRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
