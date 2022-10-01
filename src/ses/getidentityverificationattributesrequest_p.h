// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYVERIFICATIONATTRIBUTESREQUEST_P_H
#define QTAWS_GETIDENTITYVERIFICATIONATTRIBUTESREQUEST_P_H

#include "sesrequest_p.h"
#include "getidentityverificationattributesrequest.h"

namespace QtAws {
namespace Ses {

class GetIdentityVerificationAttributesRequest;

class GetIdentityVerificationAttributesRequestPrivate : public SesRequestPrivate {

public:
    GetIdentityVerificationAttributesRequestPrivate(const SesRequest::Action action,
                                   GetIdentityVerificationAttributesRequest * const q);
    GetIdentityVerificationAttributesRequestPrivate(const GetIdentityVerificationAttributesRequestPrivate &other,
                                   GetIdentityVerificationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityVerificationAttributesRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
