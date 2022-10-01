// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGPROFILESREQUEST_P_H
#define QTAWS_LISTSIGNINGPROFILESREQUEST_P_H

#include "signerrequest_p.h"
#include "listsigningprofilesrequest.h"

namespace QtAws {
namespace Signer {

class ListSigningProfilesRequest;

class ListSigningProfilesRequestPrivate : public SignerRequestPrivate {

public:
    ListSigningProfilesRequestPrivate(const SignerRequest::Action action,
                                   ListSigningProfilesRequest * const q);
    ListSigningProfilesRequestPrivate(const ListSigningProfilesRequestPrivate &other,
                                   ListSigningProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSigningProfilesRequest)

};

} // namespace Signer
} // namespace QtAws

#endif
