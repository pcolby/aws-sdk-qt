// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSSHPUBLICKEYREQUEST_P_H
#define QTAWS_GETSSHPUBLICKEYREQUEST_P_H

#include "iamrequest_p.h"
#include "getsshpublickeyrequest.h"

namespace QtAws {
namespace Iam {

class GetSSHPublicKeyRequest;

class GetSSHPublicKeyRequestPrivate : public IamRequestPrivate {

public:
    GetSSHPublicKeyRequestPrivate(const IamRequest::Action action,
                                   GetSSHPublicKeyRequest * const q);
    GetSSHPublicKeyRequestPrivate(const GetSSHPublicKeyRequestPrivate &other,
                                   GetSSHPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSSHPublicKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
