// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_UPDATECERTIFICATEAUTHORITYREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class UpdateCertificateAuthorityRequestPrivate;

class QTAWSACMPCA_EXPORT UpdateCertificateAuthorityRequest : public AcmPcaRequest {

public:
    UpdateCertificateAuthorityRequest(const UpdateCertificateAuthorityRequest &other);
    UpdateCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
