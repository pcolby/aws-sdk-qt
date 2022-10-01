// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCUSTOMKEYSTOREREQUEST_P_H
#define QTAWS_CONNECTCUSTOMKEYSTOREREQUEST_P_H

#include "kmsrequest_p.h"
#include "connectcustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class ConnectCustomKeyStoreRequest;

class ConnectCustomKeyStoreRequestPrivate : public KmsRequestPrivate {

public:
    ConnectCustomKeyStoreRequestPrivate(const KmsRequest::Action action,
                                   ConnectCustomKeyStoreRequest * const q);
    ConnectCustomKeyStoreRequestPrivate(const ConnectCustomKeyStoreRequestPrivate &other,
                                   ConnectCustomKeyStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConnectCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
