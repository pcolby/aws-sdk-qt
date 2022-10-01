// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_CREATECERTIFICATEAUTHORITYREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class CreateCertificateAuthorityRequestPrivate;

class QTAWSACMPCA_EXPORT CreateCertificateAuthorityRequest : public AcmPcaRequest {

public:
    CreateCertificateAuthorityRequest(const CreateCertificateAuthorityRequest &other);
    CreateCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
