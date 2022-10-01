// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESSHPUBLICKEYREQUEST_P_H
#define QTAWS_UPDATESSHPUBLICKEYREQUEST_P_H

#include "iamrequest_p.h"
#include "updatesshpublickeyrequest.h"

namespace QtAws {
namespace Iam {

class UpdateSSHPublicKeyRequest;

class UpdateSSHPublicKeyRequestPrivate : public IamRequestPrivate {

public:
    UpdateSSHPublicKeyRequestPrivate(const IamRequest::Action action,
                                   UpdateSSHPublicKeyRequest * const q);
    UpdateSSHPublicKeyRequestPrivate(const UpdateSSHPublicKeyRequestPrivate &other,
                                   UpdateSSHPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSSHPublicKeyRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
