// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBACKENDJOBSREQUEST_P_H
#define QTAWS_LISTBACKENDJOBSREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "listbackendjobsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ListBackendJobsRequest;

class ListBackendJobsRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    ListBackendJobsRequestPrivate(const AmplifyBackendRequest::Action action,
                                   ListBackendJobsRequest * const q);
    ListBackendJobsRequestPrivate(const ListBackendJobsRequestPrivate &other,
                                   ListBackendJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListBackendJobsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
