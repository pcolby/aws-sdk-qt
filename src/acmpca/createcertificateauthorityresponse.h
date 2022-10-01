// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_CREATECERTIFICATEAUTHORITYRESPONSE_H

#include "acmpcaresponse.h"
#include "createcertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class CreateCertificateAuthorityResponsePrivate;

class QTAWSACMPCA_EXPORT CreateCertificateAuthorityResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    CreateCertificateAuthorityResponse(const CreateCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCertificateAuthorityResponse)
    Q_DISABLE_COPY(CreateCertificateAuthorityResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
