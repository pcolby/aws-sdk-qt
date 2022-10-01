// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMKEYSTOREREQUEST_P_H
#define QTAWS_UPDATECUSTOMKEYSTOREREQUEST_P_H

#include "kmsrequest_p.h"
#include "updatecustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class UpdateCustomKeyStoreRequest;

class UpdateCustomKeyStoreRequestPrivate : public KmsRequestPrivate {

public:
    UpdateCustomKeyStoreRequestPrivate(const KmsRequest::Action action,
                                   UpdateCustomKeyStoreRequest * const q);
    UpdateCustomKeyStoreRequestPrivate(const UpdateCustomKeyStoreRequestPrivate &other,
                                   UpdateCustomKeyStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
