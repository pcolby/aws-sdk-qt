// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBSITECERTIFICATEAUTHORITYRESPONSE_H
#define QTAWS_ASSOCIATEWEBSITECERTIFICATEAUTHORITYRESPONSE_H

#include "worklinkresponse.h"
#include "associatewebsitecertificateauthorityrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateWebsiteCertificateAuthorityResponsePrivate;

class QTAWSWORKLINK_EXPORT AssociateWebsiteCertificateAuthorityResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    AssociateWebsiteCertificateAuthorityResponse(const AssociateWebsiteCertificateAuthorityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateWebsiteCertificateAuthorityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWebsiteCertificateAuthorityResponse)
    Q_DISABLE_COPY(AssociateWebsiteCertificateAuthorityResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
