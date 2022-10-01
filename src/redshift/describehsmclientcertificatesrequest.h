// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHSMCLIENTCERTIFICATESREQUEST_H
#define QTAWS_DESCRIBEHSMCLIENTCERTIFICATESREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeHsmClientCertificatesRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeHsmClientCertificatesRequest : public RedshiftRequest {

public:
    DescribeHsmClientCertificatesRequest(const DescribeHsmClientCertificatesRequest &other);
    DescribeHsmClientCertificatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHsmClientCertificatesRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
