// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCECOLLECTIONREQUEST_P_H
#define QTAWS_GETRESOURCECOLLECTIONREQUEST_P_H

#include "devopsgururequest_p.h"
#include "getresourcecollectionrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class GetResourceCollectionRequest;

class GetResourceCollectionRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    GetResourceCollectionRequestPrivate(const DevOpsGuruRequest::Action action,
                                   GetResourceCollectionRequest * const q);
    GetResourceCollectionRequestPrivate(const GetResourceCollectionRequestPrivate &other,
                                   GetResourceCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResourceCollectionRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
