// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERSREQUEST_P_H
#define QTAWS_LISTCONTAINERSREQUEST_P_H

#include "mediastorerequest_p.h"
#include "listcontainersrequest.h"

namespace QtAws {
namespace MediaStore {

class ListContainersRequest;

class ListContainersRequestPrivate : public MediaStoreRequestPrivate {

public:
    ListContainersRequestPrivate(const MediaStoreRequest::Action action,
                                   ListContainersRequest * const q);
    ListContainersRequestPrivate(const ListContainersRequestPrivate &other,
                                   ListContainersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContainersRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
