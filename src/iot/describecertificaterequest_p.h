// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEREQUEST_P_H
#define QTAWS_DESCRIBECERTIFICATEREQUEST_P_H

#include "iotrequest_p.h"
#include "describecertificaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeCertificateRequest;

class DescribeCertificateRequestPrivate : public IoTRequestPrivate {

public:
    DescribeCertificateRequestPrivate(const IoTRequest::Action action,
                                   DescribeCertificateRequest * const q);
    DescribeCertificateRequestPrivate(const DescribeCertificateRequestPrivate &other,
                                   DescribeCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
