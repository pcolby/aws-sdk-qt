// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_UPDATECERTIFICATEAUTHORITYRESPONSE_H

#include "acmpcaresponse.h"
#include "updatecertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class UpdateCertificateAuthorityResponsePrivate;

class QTAWSACMPCA_EXPORT UpdateCertificateAuthorityResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    UpdateCertificateAuthorityResponse(const UpdateCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCertificateAuthorityResponse)
    Q_DISABLE_COPY(UpdateCertificateAuthorityResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
