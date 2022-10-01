// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSKEYREQUEST_P_H
#define QTAWS_DELETEACCESSKEYREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteaccesskeyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteAccessKeyRequest;

class DeleteAccessKeyRequestPrivate : public IamRequestPrivate {

public:
    DeleteAccessKeyRequestPrivate(const IamRequest::Action action,
                                   DeleteAccessKeyRequest * const q);
    DeleteAccessKeyRequestPrivate(const DeleteAccessKeyRequestPrivate &other,
                                   DeleteAccessKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
