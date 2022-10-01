// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTS3BUCKETSREQUEST_P_H
#define QTAWS_LISTS3BUCKETSREQUEST_P_H

#include "amplifybackendrequest_p.h"
#include "lists3bucketsrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ListS3BucketsRequest;

class ListS3BucketsRequestPrivate : public AmplifyBackendRequestPrivate {

public:
    ListS3BucketsRequestPrivate(const AmplifyBackendRequest::Action action,
                                   ListS3BucketsRequest * const q);
    ListS3BucketsRequestPrivate(const ListS3BucketsRequestPrivate &other,
                                   ListS3BucketsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListS3BucketsRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
