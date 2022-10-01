// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPROFILEPERMISSIONREQUEST_P_H
#define QTAWS_ADDPROFILEPERMISSIONREQUEST_P_H

#include "signerrequest_p.h"
#include "addprofilepermissionrequest.h"

namespace QtAws {
namespace Signer {

class AddProfilePermissionRequest;

class AddProfilePermissionRequestPrivate : public SignerRequestPrivate {

public:
    AddProfilePermissionRequestPrivate(const SignerRequest::Action action,
                                   AddProfilePermissionRequest * const q);
    AddProfilePermissionRequestPrivate(const AddProfilePermissionRequestPrivate &other,
                                   AddProfilePermissionRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddProfilePermissionRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
