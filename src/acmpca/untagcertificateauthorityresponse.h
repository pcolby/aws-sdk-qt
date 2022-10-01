// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGCERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_UNTAGCERTIFICATEAUTHORITYRESPONSE_H

#include "acmpcaresponse.h"
#include "untagcertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class UntagCertificateAuthorityResponsePrivate;

class QTAWSACMPCA_EXPORT UntagCertificateAuthorityResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    UntagCertificateAuthorityResponse(const UntagCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagCertificateAuthorityResponse)
    Q_DISABLE_COPY(UntagCertificateAuthorityResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
