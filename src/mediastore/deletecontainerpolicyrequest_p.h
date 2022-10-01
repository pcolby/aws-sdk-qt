// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERPOLICYREQUEST_P_H
#define QTAWS_DELETECONTAINERPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "deletecontainerpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteContainerPolicyRequest;

class DeleteContainerPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    DeleteContainerPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   DeleteContainerPolicyRequest * const q);
    DeleteContainerPolicyRequestPrivate(const DeleteContainerPolicyRequestPrivate &other,
                                   DeleteContainerPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
