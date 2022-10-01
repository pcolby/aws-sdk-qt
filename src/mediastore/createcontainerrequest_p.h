// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONTAINERREQUEST_P_H
#define QTAWS_CREATECONTAINERREQUEST_P_H

#include "mediastorerequest_p.h"
#include "createcontainerrequest.h"

namespace QtAws {
namespace MediaStore {

class CreateContainerRequest;

class CreateContainerRequestPrivate : public MediaStoreRequestPrivate {

public:
    CreateContainerRequestPrivate(const MediaStoreRequest::Action action,
                                   CreateContainerRequest * const q);
    CreateContainerRequestPrivate(const CreateContainerRequestPrivate &other,
                                   CreateContainerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateContainerRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
