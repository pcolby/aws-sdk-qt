// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDJOBREQUEST_P_H
#define QTAWS_GETBACKENDJOBREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "getbackendjobrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendJobRequest;

class GetBackendJobRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    GetBackendJobRequestPrivate(const AmplifyBackendRequest::Action action,
                                   GetBackendJobRequest * const q);
    GetBackendJobRequestPrivate(const GetBackendJobRequestPrivate &other,
                                   GetBackendJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBackendJobRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
