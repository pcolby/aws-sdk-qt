// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTCUSTOMKEYSTOREREQUEST_P_H
#define QTAWS_DISCONNECTCUSTOMKEYSTOREREQUEST_P_H

#include "kmsrequest_p.h"
#include "disconnectcustomkeystorerequest.h"

namespace QtAws {
namespace Kms {

class DisconnectCustomKeyStoreRequest;

class DisconnectCustomKeyStoreRequestPrivate : public KmsRequestPrivate {

public:
    DisconnectCustomKeyStoreRequestPrivate(const KmsRequest::Action action,
                                   DisconnectCustomKeyStoreRequest * const q);
    DisconnectCustomKeyStoreRequestPrivate(const DisconnectCustomKeyStoreRequestPrivate &other,
                                   DisconnectCustomKeyStoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisconnectCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
