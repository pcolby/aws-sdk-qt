// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELIFECYCLEPOLICYREQUEST_P_H
#define QTAWS_DELETELIFECYCLEPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "deletelifecyclepolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteLifecyclePolicyRequest;

class DeleteLifecyclePolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    DeleteLifecyclePolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   DeleteLifecyclePolicyRequest * const q);
    DeleteLifecyclePolicyRequestPrivate(const DeleteLifecyclePolicyRequestPrivate &other,
                                   DeleteLifecyclePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteLifecyclePolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
