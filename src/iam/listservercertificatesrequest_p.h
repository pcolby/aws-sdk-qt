// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERCERTIFICATESREQUEST_P_H
#define QTAWS_LISTSERVERCERTIFICATESREQUEST_P_H

#include "iamrequest_p.h"
#include "listservercertificatesrequest.h"

namespace QtAws {
namespace Iam {

class ListServerCertificatesRequest;

class ListServerCertificatesRequestPrivate : public IamRequestPrivate {

public:
    ListServerCertificatesRequestPrivate(const IamRequest::Action action,
                                   ListServerCertificatesRequest * const q);
    ListServerCertificatesRequestPrivate(const ListServerCertificatesRequestPrivate &other,
                                   ListServerCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListServerCertificatesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
