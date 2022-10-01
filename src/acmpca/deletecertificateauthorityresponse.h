// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_DELETECERTIFICATEAUTHORITYRESPONSE_H

#include "acmpcaresponse.h"
#include "deletecertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class DeleteCertificateAuthorityResponsePrivate;

class QTAWSACMPCA_EXPORT DeleteCertificateAuthorityResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    DeleteCertificateAuthorityResponse(const DeleteCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCertificateAuthorityResponse)
    Q_DISABLE_COPY(DeleteCertificateAuthorityResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
