// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTAINERPOLICYREQUEST_P_H
#define QTAWS_GETCONTAINERPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "getcontainerpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class GetContainerPolicyRequest;

class GetContainerPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    GetContainerPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   GetContainerPolicyRequest * const q);
    GetContainerPolicyRequestPrivate(const GetContainerPolicyRequestPrivate &other,
                                   GetContainerPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContainerPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
