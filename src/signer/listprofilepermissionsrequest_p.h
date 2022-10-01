// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEPERMISSIONSREQUEST_P_H
#define QTAWS_LISTPROFILEPERMISSIONSREQUEST_P_H

#include "signerrequest_p.h"
#include "listprofilepermissionsrequest.h"

namespace QtAws {
namespace Signer {

class ListProfilePermissionsRequest;

class ListProfilePermissionsRequestPrivate : public SignerRequestPrivate {

public:
    ListProfilePermissionsRequestPrivate(const SignerRequest::Action action,
                                   ListProfilePermissionsRequest * const q);
    ListProfilePermissionsRequestPrivate(const ListProfilePermissionsRequestPrivate &other,
                                   ListProfilePermissionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProfilePermissionsRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
