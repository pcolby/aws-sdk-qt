// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEAUTHORITYCERTIFICATEREQUEST_H
#define QTAWS_GETCERTIFICATEAUTHORITYCERTIFICATEREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateAuthorityCertificateRequestPrivate;

class QTAWSACMPCA_EXPORT GetCertificateAuthorityCertificateRequest : public AcmPcaRequest {

public:
    GetCertificateAuthorityCertificateRequest(const GetCertificateAuthorityCertificateRequest &other);
    GetCertificateAuthorityCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCertificateAuthorityCertificateRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
