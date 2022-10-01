// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_DESCRIBECERTIFICATEAUTHORITYREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class DescribeCertificateAuthorityRequestPrivate;

class QTAWSACMPCA_EXPORT DescribeCertificateAuthorityRequest : public AcmPcaRequest {

public:
    DescribeCertificateAuthorityRequest(const DescribeCertificateAuthorityRequest &other);
    DescribeCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
