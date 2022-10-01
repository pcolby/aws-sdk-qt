// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEREQUEST_P_H
#define QTAWS_DESCRIBECERTIFICATEREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describecertificaterequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeCertificateRequest;

class DescribeCertificateRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeCertificateRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeCertificateRequest * const q);
    DescribeCertificateRequestPrivate(const DescribeCertificateRequestPrivate &other,
                                   DescribeCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
