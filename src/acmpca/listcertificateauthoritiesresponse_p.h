// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATEAUTHORITIESRESPONSE_P_H
#define QTAWS_LISTCERTIFICATEAUTHORITIESRESPONSE_P_H

#include "acmpcaresponse_p.h"

namespace QtAws {
namespace AcmPca {

class ListCertificateAuthoritiesResponse;

class ListCertificateAuthoritiesResponsePrivate : public AcmPcaResponsePrivate {

public:

    explicit ListCertificateAuthoritiesResponsePrivate(ListCertificateAuthoritiesResponse * const q);

    void parseListCertificateAuthoritiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCertificateAuthoritiesResponse)
    Q_DISABLE_COPY(ListCertificateAuthoritiesResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
