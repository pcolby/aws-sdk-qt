// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWEBSITEAUTHORIZATIONPROVIDERRESPONSE_H
#define QTAWS_DISASSOCIATEWEBSITEAUTHORIZATIONPROVIDERRESPONSE_H

#include "worklinkresponse.h"
#include "disassociatewebsiteauthorizationproviderrequest.h"

namespace QtAws {
namespace WorkLink {

class DisassociateWebsiteAuthorizationProviderResponsePrivate;

class QTAWSWORKLINK_EXPORT DisassociateWebsiteAuthorizationProviderResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    DisassociateWebsiteAuthorizationProviderResponse(const DisassociateWebsiteAuthorizationProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateWebsiteAuthorizationProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWebsiteAuthorizationProviderResponse)
    Q_DISABLE_COPY(DisassociateWebsiteAuthorizationProviderResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
