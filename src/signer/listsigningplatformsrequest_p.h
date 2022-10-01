// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGPLATFORMSREQUEST_P_H
#define QTAWS_LISTSIGNINGPLATFORMSREQUEST_P_H

#include "signerrequest_p.h"
#include "listsigningplatformsrequest.h"

namespace QtAws {
namespace Signer {

class ListSigningPlatformsRequest;

class ListSigningPlatformsRequestPrivate : public SignerRequestPrivate {

public:
    ListSigningPlatformsRequestPrivate(const SignerRequest::Action action,
                                   ListSigningPlatformsRequest * const q);
    ListSigningPlatformsRequestPrivate(const ListSigningPlatformsRequestPrivate &other,
                                   ListSigningPlatformsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSigningPlatformsRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
