// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERCONFIGURATIONRESPONSE_H
#define QTAWS_UPDATEIDENTITYPROVIDERCONFIGURATIONRESPONSE_H

#include "worklinkresponse.h"
#include "updateidentityproviderconfigurationrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateIdentityProviderConfigurationResponsePrivate;

class QTAWSWORKLINK_EXPORT UpdateIdentityProviderConfigurationResponse : public WorkLinkResponse {
    Q_OBJECT

public:
    UpdateIdentityProviderConfigurationResponse(const UpdateIdentityProviderConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIdentityProviderConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIdentityProviderConfigurationResponse)
    Q_DISABLE_COPY(UpdateIdentityProviderConfigurationResponse)

};

} // namespace WorkLink
} // namespace QtAws

#endif
