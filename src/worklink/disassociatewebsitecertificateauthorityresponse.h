// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBSITECERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_DISASSOCIATEWEBSITECERTIFICATEAUTHORITYRESPONSE_H

#include "worklinkresponse.h"
#include "disassociatewebsitecertificateauthorityrequest.h"

namespace QtAws {
namespace WorkLink {

class DisassociateWebsiteCertificateAuthorityResponsePrivate;

class QTAWSWORKLINK_EXPORT DisassociateWebsiteCertificateAuthorityResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DisassociateWebsiteCertificateAuthorityResponse(const DisassociateWebsiteCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateWebsiteCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWebsiteCertificateAuthorityResponse)
    Q_DISABLE_COPY(DisassociateWebsiteCertificateAuthorityResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
