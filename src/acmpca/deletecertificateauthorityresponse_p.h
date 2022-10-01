// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_DELETECERTIFICATEAUTHORITYRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class DeleteCertificateAuthorityResponse;

class DeleteCertificateAuthorityResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit DeleteCertificateAuthorityResponsePrivate(DeleteCertificateAuthorityResponse * const q);

    void parseDeleteCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCertificateAuthorityResponse)
    Q_DISABLE_COPY(DeleteCertificateAuthorityResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
