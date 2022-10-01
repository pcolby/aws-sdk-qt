// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBSITECERTIFICATEAUTHORITIESREQUEST_P_H
#define QTAWS_LISTWEBSITECERTIFICATEAUTHORITIESREQUEST_P_H

#include "worklinkrequest_p.h"
#include "listwebsitecertificateauthoritiesrequest.h"

namespace QtAws {
namespace WorkLink {

class ListWebsiteCertificateAuthoritiesRequest;

class ListWebsiteCertificateAuthoritiesRequestPrivate : public WorkLinkRequestPrivate {

public:
    ListWebsiteCertificateAuthoritiesRequestPrivate(const WorkLinkRequest::Action action,
                                   ListWebsiteCertificateAuthoritiesRequest * const q);
    ListWebsiteCertificateAuthoritiesRequestPrivate(const ListWebsiteCertificateAuthoritiesRequestPrivate &other,
                                   ListWebsiteCertificateAuthoritiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListWebsiteCertificateAuthoritiesRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
