// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_DESCRIBECERTIFICATEAUTHORITYRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class DescribeCertificateAuthorityResponse;

class DescribeCertificateAuthorityResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit DescribeCertificateAuthorityResponsePrivate(DescribeCertificateAuthorityResponse * const q);

    void parseDescribeCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCertificateAuthorityResponse)
    Q_DISABLE_COPY(DescribeCertificateAuthorityResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
