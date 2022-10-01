// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATEAUTHORITYCERTIFICATERESPONSE_H
#define QTAWS_GETCERTIFICATEAUTHORITYCERTIFICATERESPONSE_H

#include "acmpcaresponse.h"
#include "getcertificateauthoritycertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateAuthorityCertificateResponsePrivate;

class QTAWSACMPCA_EXPORT GetCertificateAuthorityCertificateResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    GetCertificateAuthorityCertificateResponse(const GetCertificateAuthorityCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCertificateAuthorityCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCertificateAuthorityCertificateResponse)
    Q_DISABLE_COPY(GetCertificateAuthorityCertificateResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
