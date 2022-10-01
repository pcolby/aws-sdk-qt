// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSANDCERTIFICATEREQUEST_P_H
#define QTAWS_CREATEKEYSANDCERTIFICATEREQUEST_P_H

#include "iotrequest_p.h"
#include "createkeysandcertificaterequest.h"

namespace QtAws {
namespace IoT {

class CreateKeysAndCertificateRequest;

class CreateKeysAndCertificateRequestPrivate : public IoTRequestPrivate {

public:
    CreateKeysAndCertificateRequestPrivate(const IoTRequest::Action action,
                                   CreateKeysAndCertificateRequest * const q);
    CreateKeysAndCertificateRequestPrivate(const CreateKeysAndCertificateRequestPrivate &other,
                                   CreateKeysAndCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateKeysAndCertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
