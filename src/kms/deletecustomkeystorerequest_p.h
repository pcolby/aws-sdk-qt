// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMKEYSTOREREQUEST_P_H
#define QTAWS_DELETECUSTOMKEYSTOREREQUEST_P_H

#include "kmsrequest_p.h"
#include "deletecustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class DeleteCustomKeyStoreRequest;

class DeleteCustomKeyStoreRequestPrivate : public KmsRequestPrivate {

public:
    DeleteCustomKeyStoreRequestPrivate(const KmsRequest::Action action,
                                   DeleteCustomKeyStoreRequest * const q);
    DeleteCustomKeyStoreRequestPrivate(const DeleteCustomKeyStoreRequestPrivate &other,
                                   DeleteCustomKeyStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
