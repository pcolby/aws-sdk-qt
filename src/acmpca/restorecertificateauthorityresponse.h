// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORECERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_RESTORECERTIFICATEAUTHORITYRESPONSE_H

#include "acmpcaresponse.h"
#include "restorecertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class RestoreCertificateAuthorityResponsePrivate;

class QTAWSACMPCA_EXPORT RestoreCertificateAuthorityResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    RestoreCertificateAuthorityResponse(const RestoreCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RestoreCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreCertificateAuthorityResponse)
    Q_DISABLE_COPY(RestoreCertificateAuthorityResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
