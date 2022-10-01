// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBSITECERTIFICATEAUTHORITYREQUEST_P_H
#define QTAWS_DISASSOCIATEWEBSITECERTIFICATEAUTHORITYREQUEST_P_H

#include "worklinkrequest_p.h"
#include "disassociatewebsitecertificateauthorityrequest.h"

namespace QtAws {
namespace WorkLink {

class DisassociateWebsiteCertificateAuthorityRequest;

class DisassociateWebsiteCertificateAuthorityRequestPrivate : public WorkLinkRequestPrivate {

public:
    DisassociateWebsiteCertificateAuthorityRequestPrivate(const WorkLinkRequest::Action action,
                                   DisassociateWebsiteCertificateAuthorityRequest * const q);
    DisassociateWebsiteCertificateAuthorityRequestPrivate(const DisassociateWebsiteCertificateAuthorityRequestPrivate &other,
                                   DisassociateWebsiteCertificateAuthorityRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWebsiteCertificateAuthorityRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
