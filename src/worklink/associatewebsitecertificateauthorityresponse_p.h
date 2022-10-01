// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBSITECERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_ASSOCIATEWEBSITECERTIFICATEAUTHORITYRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class AssociateWebsiteCertificateAuthorityResponse;

class AssociateWebsiteCertificateAuthorityResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit AssociateWebsiteCertificateAuthorityResponsePrivate(AssociateWebsiteCertificateAuthorityResponse * const q);

    void parseAssociateWebsiteCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateWebsiteCertificateAuthorityResponse)
    Q_DISABLE_COPY(AssociateWebsiteCertificateAuthorityResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
