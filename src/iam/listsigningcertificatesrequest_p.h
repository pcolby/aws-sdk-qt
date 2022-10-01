// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGCERTIFICATESREQUEST_P_H
#define QTAWS_LISTSIGNINGCERTIFICATESREQUEST_P_H

#include "iamrequest_p.h"
#include "listsigningcertificatesrequest.h"

namespace QtAws {
namespace Iam {

class ListSigningCertificatesRequest;

class ListSigningCertificatesRequestPrivate : public IamRequestPrivate {

public:
    ListSigningCertificatesRequestPrivate(const IamRequest::Action action,
                                   ListSigningCertificatesRequest * const q);
    ListSigningCertificatesRequestPrivate(const ListSigningCertificatesRequestPrivate &other,
                                   ListSigningCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSigningCertificatesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
