// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAPIREQUEST_P_H
#define QTAWS_GETBACKENDAPIREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "getbackendapirequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAPIRequest;

class GetBackendAPIRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    GetBackendAPIRequestPrivate(const AmplifyBackendRequest::Action action,
                                   GetBackendAPIRequest * const q);
    GetBackendAPIRequestPrivate(const GetBackendAPIRequestPrivate &other,
                                   GetBackendAPIRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackendAPIRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
