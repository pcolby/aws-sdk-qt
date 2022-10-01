// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONTAINERPOLICYREQUEST_P_H
#define QTAWS_PUTCONTAINERPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "putcontainerpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class PutContainerPolicyRequest;

class PutContainerPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    PutContainerPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   PutContainerPolicyRequest * const q);
    PutContainerPolicyRequestPrivate(const PutContainerPolicyRequestPrivate &other,
                                   PutContainerPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
