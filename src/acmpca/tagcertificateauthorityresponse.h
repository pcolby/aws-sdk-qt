// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGCERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_TAGCERTIFICATEAUTHORITYRESPONSE_H

#include "acmpcaresponse.h"
#include "tagcertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class TagCertificateAuthorityResponsePrivate;

class QTAWSACMPCA_EXPORT TagCertificateAuthorityResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    TagCertificateAuthorityResponse(const TagCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagCertificateAuthorityResponse)
    Q_DISABLE_COPY(TagCertificateAuthorityResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
