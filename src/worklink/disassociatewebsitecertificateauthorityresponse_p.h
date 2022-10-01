// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBSITECERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_DISASSOCIATEWEBSITECERTIFICATEAUTHORITYRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class DisassociateWebsiteCertificateAuthorityResponse;

class DisassociateWebsiteCertificateAuthorityResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit DisassociateWebsiteCertificateAuthorityResponsePrivate(DisassociateWebsiteCertificateAuthorityResponse * const q);

    void parseDisassociateWebsiteCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWebsiteCertificateAuthorityResponse)
    Q_DISABLE_COPY(DisassociateWebsiteCertificateAuthorityResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
