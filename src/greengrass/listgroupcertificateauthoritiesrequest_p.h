// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPCERTIFICATEAUTHORITIESREQUEST_P_H
#define QTAWS_LISTGROUPCERTIFICATEAUTHORITIESREQUEST_P_H

#include "greengrassrequest_p.h"
#include "listgroupcertificateauthoritiesrequest.h"

namespace QtAws {
namespace Greengrass {

class ListGroupCertificateAuthoritiesRequest;

class ListGroupCertificateAuthoritiesRequestPrivate : public GreengrassRequestPrivate {

public:
    ListGroupCertificateAuthoritiesRequestPrivate(const GreengrassRequest::Action action,
                                   ListGroupCertificateAuthoritiesRequest * const q);
    ListGroupCertificateAuthoritiesRequestPrivate(const ListGroupCertificateAuthoritiesRequestPrivate &other,
                                   ListGroupCertificateAuthoritiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGroupCertificateAuthoritiesRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
