// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENCRYPTREQUEST_P_H
#define QTAWS_ENCRYPTREQUEST_P_H

#include "kmsrequest_p.h"
#include "encryptrequest.h"

namespace QtAws {
namespace Kms {

class EncryptRequest;

class EncryptRequestPrivate : public KmsRequestPrivate {

public:
    EncryptRequestPrivate(const KmsRequest::Action action,
                                   EncryptRequest * const q);
    EncryptRequestPrivate(const EncryptRequestPrivate &other,
                                   EncryptRequest * const q);

private:
    Q_DECLARE_PUBLIC(EncryptRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
