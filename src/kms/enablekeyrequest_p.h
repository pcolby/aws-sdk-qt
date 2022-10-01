// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKEYREQUEST_P_H
#define QTAWS_ENABLEKEYREQUEST_P_H

#include "kmsrequest_p.h"
#include "enablekeyrequest.h"

namespace QtAws {
namespace Kms {

class EnableKeyRequest;

class EnableKeyRequestPrivate : public KmsRequestPrivate {

public:
    EnableKeyRequestPrivate(const KmsRequest::Action action,
                                   EnableKeyRequest * const q);
    EnableKeyRequestPrivate(const EnableKeyRequestPrivate &other,
                                   EnableKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
