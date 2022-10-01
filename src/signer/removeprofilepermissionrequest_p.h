// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEPROFILEPERMISSIONREQUEST_P_H
#define QTAWS_REMOVEPROFILEPERMISSIONREQUEST_P_H

#include "signerrequest_p.h"
#include "removeprofilepermissionrequest.h"

namespace QtAws {
namespace Signer {

class RemoveProfilePermissionRequest;

class RemoveProfilePermissionRequestPrivate : public SignerRequestPrivate {

public:
    RemoveProfilePermissionRequestPrivate(const SignerRequest::Action action,
                                   RemoveProfilePermissionRequest * const q);
    RemoveProfilePermissionRequestPrivate(const RemoveProfilePermissionRequestPrivate &other,
                                   RemoveProfilePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveProfilePermissionRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
