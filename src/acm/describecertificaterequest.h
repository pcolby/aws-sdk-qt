// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEREQUEST_H
#define QTAWS_DESCRIBECERTIFICATEREQUEST_H

#include "acmrequest.h"

namespace QtAws {
namespace Acm {

class DescribeCertificateRequestPrivate;

class QTAWSACM_EXPORT DescribeCertificateRequest : public AcmRequest {

public:
    DescribeCertificateRequest(const DescribeCertificateRequest &other);
    DescribeCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificateRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
