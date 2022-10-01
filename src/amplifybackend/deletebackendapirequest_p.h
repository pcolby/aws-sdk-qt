// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDAPIREQUEST_P_H
#define QTAWS_DELETEBACKENDAPIREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "deletebackendapirequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendAPIRequest;

class DeleteBackendAPIRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    DeleteBackendAPIRequestPrivate(const AmplifyBackendRequest::Action action,
                                   DeleteBackendAPIRequest * const q);
    DeleteBackendAPIRequestPrivate(const DeleteBackendAPIRequestPrivate &other,
                                   DeleteBackendAPIRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteBackendAPIRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
