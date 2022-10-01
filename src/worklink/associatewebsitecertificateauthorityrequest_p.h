// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBSITECERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_ASSOCIATEWEBSITECERTIFICATEAUTHORITYREQUEST_P_H

#include "worklinkrequest_p.h"
#include "associatewebsitecertificateauthorityrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateWebsiteCertificateAuthorityRequest;

class AssociateWebsiteCertificateAuthorityRequestPrivate : public WorkLinkRequestPrivate {

public:
    AssociateWebsiteCertificateAuthorityRequestPrivate(const WorkLinkRequest::Action action,
                                   AssociateWebsiteCertificateAuthorityRequest * const q);
    AssociateWebsiteCertificateAuthorityRequestPrivate(const AssociateWebsiteCertificateAuthorityRequestPrivate &other,
                                   AssociateWebsiteCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWebsiteCertificateAuthorityRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
