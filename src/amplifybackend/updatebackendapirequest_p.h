// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDAPIREQUEST_P_H
#define QTAWS_UPDATEBACKENDAPIREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "updatebackendapirequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendAPIRequest;

class UpdateBackendAPIRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    UpdateBackendAPIRequestPrivate(const AmplifyBackendRequest::Action action,
                                   UpdateBackendAPIRequest * const q);
    UpdateBackendAPIRequestPrivate(const UpdateBackendAPIRequestPrivate &other,
                                   UpdateBackendAPIRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBackendAPIRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
