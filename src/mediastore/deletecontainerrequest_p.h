// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERREQUEST_P_H
#define QTAWS_DELETECONTAINERREQUEST_P_H

#include "mediastorerequest_p.h"
#include "deletecontainerrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteContainerRequest;

class DeleteContainerRequestPrivate : public MediaStoreRequestPrivate {

public:
    DeleteContainerRequestPrivate(const MediaStoreRequest::Action action,
                                   DeleteContainerRequest * const q);
    DeleteContainerRequestPrivate(const DeleteContainerRequestPrivate &other,
                                   DeleteContainerRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContainerRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
