// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMCLIENTCERTIFICATESREQUEST_P_H
#define QTAWS_DESCRIBEHSMCLIENTCERTIFICATESREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describehsmclientcertificatesrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeHsmClientCertificatesRequest;

class DescribeHsmClientCertificatesRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeHsmClientCertificatesRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeHsmClientCertificatesRequest * const q);
    DescribeHsmClientCertificatesRequestPrivate(const DescribeHsmClientCertificatesRequestPrivate &other,
                                   DescribeHsmClientCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHsmClientCertificatesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
