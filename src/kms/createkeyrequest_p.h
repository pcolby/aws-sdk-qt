// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYREQUEST_P_H
#define QTAWS_CREATEKEYREQUEST_P_H

#include "kmsrequest_p.h"
#include "createkeyrequest.h"

namespace QtAws {
namespace Kms {

class CreateKeyRequest;

class CreateKeyRequestPrivate : public KmsRequestPrivate {

public:
    CreateKeyRequestPrivate(const KmsRequest::Action action,
                                   CreateKeyRequest * const q);
    CreateKeyRequestPrivate(const CreateKeyRequestPrivate &other,
                                   CreateKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
