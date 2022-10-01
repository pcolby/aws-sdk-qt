// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTREQUEST_P_H
#define QTAWS_DELETEOBJECTREQUEST_P_H

#include "mediastoredatarequest_p.h"
#include "deleteobjectrequest.h"

namespace QtAws {
namespace MediaStoreData {

class DeleteObjectRequest;

class DeleteObjectRequestPrivate : public MediaStoreDataRequestPrivate {

public:
    DeleteObjectRequestPrivate(const MediaStoreDataRequest::Action action,
                                   DeleteObjectRequest * const q);
    DeleteObjectRequestPrivate(const DeleteObjectRequestPrivate &other,
                                   DeleteObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteObjectRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
