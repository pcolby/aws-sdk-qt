// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEPOLICYREQUEST_P_H
#define QTAWS_PUTLIFECYCLEPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "putlifecyclepolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class PutLifecyclePolicyRequest;

class PutLifecyclePolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    PutLifecyclePolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   PutLifecyclePolicyRequest * const q);
    PutLifecyclePolicyRequestPrivate(const PutLifecyclePolicyRequestPrivate &other,
                                   PutLifecyclePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutLifecyclePolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
