// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACERTIFICATEREQUEST_P_H
#define QTAWS_DESCRIBECACERTIFICATEREQUEST_P_H

#include "iotrequest_p.h"
#include "describecacertificaterequest.h"

namespace QtAws {
namespace IoT {

class DescribeCACertificateRequest;

class DescribeCACertificateRequestPrivate : public IoTRequestPrivate {

public:
    DescribeCACertificateRequestPrivate(const IoTRequest::Action action,
                                   DescribeCACertificateRequest * const q);
    DescribeCACertificateRequestPrivate(const DescribeCACertificateRequestPrivate &other,
                                   DescribeCACertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCACertificateRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
