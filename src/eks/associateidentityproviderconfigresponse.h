// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIDENTITYPROVIDERCONFIGRESPONSE_H
#define QTAWS_ASSOCIATEIDENTITYPROVIDERCONFIGRESPONSE_H

#include "eksresponse.h"
#include "associateidentityproviderconfigrequest.h"

namespace QtAws {
namespace Eks {

class AssociateIdentityProviderConfigResponsePrivate;

class QTAWSEKS_EXPORT AssociateIdentityProviderConfigResponse : public EksResponse {
    Q_OBJECT

public:
    AssociateIdentityProviderConfigResponse(const AssociateIdentityProviderConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateIdentityProviderConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateIdentityProviderConfigResponse)
    Q_DISABLE_COPY(AssociateIdentityProviderConfigResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
