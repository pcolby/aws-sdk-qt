// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESSHPUBLICKEYREQUEST_P_H
#define QTAWS_DELETESSHPUBLICKEYREQUEST_P_H

#include "iamrequest_p.h"
#include "deletesshpublickeyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteSSHPublicKeyRequest;

class DeleteSSHPublicKeyRequestPrivate : public IamRequestPrivate {

public:
    DeleteSSHPublicKeyRequestPrivate(const IamRequest::Action action,
                                   DeleteSSHPublicKeyRequest * const q);
    DeleteSSHPublicKeyRequestPrivate(const DeleteSSHPublicKeyRequestPrivate &other,
                                   DeleteSSHPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSSHPublicKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
