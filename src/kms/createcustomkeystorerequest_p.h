// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMKEYSTOREREQUEST_P_H
#define QTAWS_CREATECUSTOMKEYSTOREREQUEST_P_H

#include "kmsrequest_p.h"
#include "createcustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class CreateCustomKeyStoreRequest;

class CreateCustomKeyStoreRequestPrivate : public KmsRequestPrivate {

public:
    CreateCustomKeyStoreRequestPrivate(const KmsRequest::Action action,
                                   CreateCustomKeyStoreRequest * const q);
    CreateCustomKeyStoreRequestPrivate(const CreateCustomKeyStoreRequestPrivate &other,
                                   CreateCustomKeyStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
