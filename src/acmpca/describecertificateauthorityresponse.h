// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_DESCRIBECERTIFICATEAUTHORITYRESPONSE_H

#include "acmpcaresponse.h"
#include "describecertificateauthorityrequest.h"

namespace QtAws {
namespace AcmPca {

class DescribeCertificateAuthorityResponsePrivate;

class QTAWSACMPCA_EXPORT DescribeCertificateAuthorityResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    DescribeCertificateAuthorityResponse(const DescribeCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCertificateAuthorityResponse)
    Q_DISABLE_COPY(DescribeCertificateAuthorityResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
