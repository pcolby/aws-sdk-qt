// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCERTIFICATESREQUEST_P_H
#define QTAWS_LISTCERTIFICATESREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "listcertificatesrequest.h"

namespace QtAws {
namespace DirectoryService {

class ListCertificatesRequest;

class ListCertificatesRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    ListCertificatesRequestPrivate(const DirectoryServiceRequest::Action action,
                                   ListCertificatesRequest * const q);
    ListCertificatesRequestPrivate(const ListCertificatesRequestPrivate &other,
                                   ListCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListCertificatesRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
