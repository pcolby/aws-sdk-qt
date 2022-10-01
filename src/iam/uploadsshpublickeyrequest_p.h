// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSSHPUBLICKEYREQUEST_P_H
#define QTAWS_UPLOADSSHPUBLICKEYREQUEST_P_H

#include "iamrequest_p.h"
#include "uploadsshpublickeyrequest.h"

namespace QtAws {
namespace Iam {

class UploadSSHPublicKeyRequest;

class UploadSSHPublicKeyRequestPrivate : public IamRequestPrivate {

public:
    UploadSSHPublicKeyRequestPrivate(const IamRequest::Action action,
                                   UploadSSHPublicKeyRequest * const q);
    UploadSSHPublicKeyRequestPrivate(const UploadSSHPublicKeyRequestPrivate &other,
                                   UploadSSHPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UploadSSHPublicKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
