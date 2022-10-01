// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDJOBREQUEST_P_H
#define QTAWS_UPDATEBACKENDJOBREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "updatebackendjobrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendJobRequest;

class UpdateBackendJobRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    UpdateBackendJobRequestPrivate(const AmplifyBackendRequest::Action action,
                                   UpdateBackendJobRequest * const q);
    UpdateBackendJobRequestPrivate(const UpdateBackendJobRequestPrivate &other,
                                   UpdateBackendJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateBackendJobRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
