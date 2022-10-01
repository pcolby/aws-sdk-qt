// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGCERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_UNTAGCERTIFICATEAUTHORITYREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class UntagCertificateAuthorityRequestPrivate;

class QTAWSACMPCA_EXPORT UntagCertificateAuthorityRequest : public AcmPcaRequest {

public:
    UntagCertificateAuthorityRequest(const UntagCertificateAuthorityRequest &other);
    UntagCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
