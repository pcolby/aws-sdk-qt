// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATEAUTHORITIESREQUEST_P_H
#define QTAWS_LISTCERTIFICATEAUTHORITIESREQUEST_P_H

#include "acmpcarequest_p.h"
#include "listcertificateauthoritiesrequest.h"

namespace QtAws {
namespace AcmPca {

class ListCertificateAuthoritiesRequest;

class ListCertificateAuthoritiesRequestPrivate : public AcmPcaRequestPrivate {

public:
    ListCertificateAuthoritiesRequestPrivate(const AcmPcaRequest::Action action,
                                   ListCertificateAuthoritiesRequest * const q);
    ListCertificateAuthoritiesRequestPrivate(const ListCertificateAuthoritiesRequestPrivate &other,
                                   ListCertificateAuthoritiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCertificateAuthoritiesRequest)

};

} // namespace AcmPca
} // namespace QtAws

#endif
