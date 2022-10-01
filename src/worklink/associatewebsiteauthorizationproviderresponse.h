// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBSITEAUTHORIZATIONPROVIDERRESPONSE_H
#define QTAWS_ASSOCIATEWEBSITEAUTHORIZATIONPROVIDERRESPONSE_H

#include "worklinkresponse.h"
#include "associatewebsiteauthorizationproviderrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateWebsiteAuthorizationProviderResponsePrivate;

class QTAWSWORKLINK_EXPORT AssociateWebsiteAuthorizationProviderResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    AssociateWebsiteAuthorizationProviderResponse(const AssociateWebsiteAuthorizationProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateWebsiteAuthorizationProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWebsiteAuthorizationProviderResponse)
    Q_DISABLE_COPY(AssociateWebsiteAuthorizationProviderResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
