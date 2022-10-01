// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORSPOLICYREQUEST_P_H
#define QTAWS_GETCORSPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "getcorspolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class GetCorsPolicyRequest;

class GetCorsPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    GetCorsPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   GetCorsPolicyRequest * const q);
    GetCorsPolicyRequestPrivate(const GetCorsPolicyRequestPrivate &other,
                                   GetCorsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetCorsPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
