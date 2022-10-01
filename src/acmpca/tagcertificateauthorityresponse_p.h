// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGCERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_TAGCERTIFICATEAUTHORITYRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class TagCertificateAuthorityResponse;

class TagCertificateAuthorityResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit TagCertificateAuthorityResponsePrivate(TagCertificateAuthorityResponse * const q);

    void parseTagCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagCertificateAuthorityResponse)
    Q_DISABLE_COPY(TagCertificateAuthorityResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
