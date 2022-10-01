// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORSPOLICYREQUEST_P_H
#define QTAWS_DELETECORSPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "deletecorspolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteCorsPolicyRequest;

class DeleteCorsPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    DeleteCorsPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   DeleteCorsPolicyRequest * const q);
    DeleteCorsPolicyRequestPrivate(const DeleteCorsPolicyRequestPrivate &other,
                                   DeleteCorsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCorsPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
