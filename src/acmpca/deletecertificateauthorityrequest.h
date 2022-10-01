// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_DELETECERTIFICATEAUTHORITYREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class DeleteCertificateAuthorityRequestPrivate;

class QTAWSACMPCA_EXPORT DeleteCertificateAuthorityRequest : public AcmPcaRequest {

public:
    DeleteCertificateAuthorityRequest(const DeleteCertificateAuthorityRequest &other);
    DeleteCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
