// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECRYPTREQUEST_P_H
#define QTAWS_DECRYPTREQUEST_P_H

#include "kmsrequest_p.h"
#include "decryptrequest.h"

namespace QtAws {
namespace Kms {

class DecryptRequest;

class DecryptRequestPrivate : public KmsRequestPrivate {

public:
    DecryptRequestPrivate(const KmsRequest::Action action,
                                   DecryptRequest * const q);
    DecryptRequestPrivate(const DecryptRequestPrivate &other,
                                   DecryptRequest * const q);

private:
    Q_DECLARE_PUBLIC(DecryptRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
