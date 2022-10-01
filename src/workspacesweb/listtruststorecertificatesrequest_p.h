// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTSTORECERTIFICATESREQUEST_P_H
#define QTAWS_LISTTRUSTSTORECERTIFICATESREQUEST_P_H

#include "workspaceswebrequest_p.h"
#include "listtruststorecertificatesrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListTrustStoreCertificatesRequest;

class ListTrustStoreCertificatesRequestPrivate : public WorkSpacesWebRequestPrivate {

public:
    ListTrustStoreCertificatesRequestPrivate(const WorkSpacesWebRequest::Action action,
                                   ListTrustStoreCertificatesRequest * const q);
    ListTrustStoreCertificatesRequestPrivate(const ListTrustStoreCertificatesRequestPrivate &other,
                                   ListTrustStoreCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTrustStoreCertificatesRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
