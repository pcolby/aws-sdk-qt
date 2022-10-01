// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATESREQUEST_P_H
#define QTAWS_DESCRIBECERTIFICATESREQUEST_P_H

#include "rdsrequest_p.h"
#include "describecertificatesrequest.h"

namespace QtAws {
namespace Rds {

class DescribeCertificatesRequest;

class DescribeCertificatesRequestPrivate : public RdsRequestPrivate {

public:
    DescribeCertificatesRequestPrivate(const RdsRequest::Action action,
                                   DescribeCertificatesRequest * const q);
    DescribeCertificatesRequestPrivate(const DescribeCertificatesRequestPrivate &other,
                                   DescribeCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCertificatesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
