// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEIDENTITYPROVIDERCONFIGRESPONSE_H
#define QTAWS_DISASSOCIATEIDENTITYPROVIDERCONFIGRESPONSE_H

#include "eksresponse.h"
#include "disassociateidentityproviderconfigrequest.h"

namespace QtAws {
namespace Eks {

class DisassociateIdentityProviderConfigResponsePrivate;

class QTAWSEKS_EXPORT DisassociateIdentityProviderConfigResponse : public EksResponse {
    Q_OBJECT

public:
    DisassociateIdentityProviderConfigResponse(const DisassociateIdentityProviderConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateIdentityProviderConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateIdentityProviderConfigResponse)
    Q_DISABLE_COPY(DisassociateIdentityProviderConfigResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
