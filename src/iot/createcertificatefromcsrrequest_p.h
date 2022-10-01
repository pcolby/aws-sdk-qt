// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEFROMCSRREQUEST_P_H
#define QTAWS_CREATECERTIFICATEFROMCSRREQUEST_P_H

#include "iotrequest_p.h"
#include "createcertificatefromcsrrequest.h"

namespace QtAws {
namespace IoT {

class CreateCertificateFromCsrRequest;

class CreateCertificateFromCsrRequestPrivate : public IoTRequestPrivate {

public:
    CreateCertificateFromCsrRequestPrivate(const IoTRequest::Action action,
                                   CreateCertificateFromCsrRequest * const q);
    CreateCertificateFromCsrRequestPrivate(const CreateCertificateFromCsrRequestPrivate &other,
                                   CreateCertificateFromCsrRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCertificateFromCsrRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
