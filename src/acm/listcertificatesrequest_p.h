// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESREQUEST_P_H
#define QTAWS_LISTCERTIFICATESREQUEST_P_H

#include "acmrequest_p.h"
#include "listcertificatesrequest.h"

namespace QtAws {
namespace Acm {

class ListCertificatesRequest;

class ListCertificatesRequestPrivate : public AcmRequestPrivate {

public:
    ListCertificatesRequestPrivate(const AcmRequest::Action action,
                                   ListCertificatesRequest * const q);
    ListCertificatesRequestPrivate(const ListCertificatesRequestPrivate &other,
                                   ListCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCertificatesRequest)

};

} // namespace Acm
} // namespace QtAws

#endif
