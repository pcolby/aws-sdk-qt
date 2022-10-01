// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGCERTIFICATEAUTHORITYREQUEST_H
#define QTAWS_TAGCERTIFICATEAUTHORITYREQUEST_H

#include "acmpcarequest.h"

namespace QtAws {
namespace AcmPca {

class TagCertificateAuthorityRequestPrivate;

class QTAWSACMPCA_EXPORT TagCertificateAuthorityRequest : public AcmPcaRequest {

public:
    TagCertificateAuthorityRequest(const TagCertificateAuthorityRequest &other);
    TagCertificateAuthorityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagCertificateAuthorityRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
