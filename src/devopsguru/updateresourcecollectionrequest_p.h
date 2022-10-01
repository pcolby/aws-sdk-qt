// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCECOLLECTIONREQUEST_P_H
#define QTAWS_UPDATERESOURCECOLLECTIONREQUEST_P_H

#include "devopsgururequest_p.h"
#include "updateresourcecollectionrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class UpdateResourceCollectionRequest;

class UpdateResourceCollectionRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    UpdateResourceCollectionRequestPrivate(const DevOpsGuruRequest::Action action,
                                   UpdateResourceCollectionRequest * const q);
    UpdateResourceCollectionRequestPrivate(const UpdateResourceCollectionRequestPrivate &other,
                                   UpdateResourceCollectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceCollectionRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
