// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYREQUEST_P_H
#define QTAWS_GETPUBLICKEYREQUEST_P_H

#include "kmsrequest_p.h"
#include "getpublickeyrequest.h"

namespace QtAws {
namespace Kms {

class GetPublicKeyRequest;

class GetPublicKeyRequestPrivate : public KmsRequestPrivate {

public:
    GetPublicKeyRequestPrivate(const KmsRequest::Action action,
                                   GetPublicKeyRequest * const q);
    GetPublicKeyRequestPrivate(const GetPublicKeyRequestPrivate &other,
                                   GetPublicKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPublicKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
