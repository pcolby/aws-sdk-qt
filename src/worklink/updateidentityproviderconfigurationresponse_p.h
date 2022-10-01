// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERCONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEIDENTITYPROVIDERCONFIGURATIONRESPONSE_P_H

#include "worklinkresponse_p.h"

namespace QtAws {
namespace WorkLink {

class UpdateIdentityProviderConfigurationResponse;

class UpdateIdentityProviderConfigurationResponsePrivate : public WorkLinkResponsePrivate {

public:

    explicit UpdateIdentityProviderConfigurationResponsePrivate(UpdateIdentityProviderConfigurationResponse * const q);

    void parseUpdateIdentityProviderConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIdentityProviderConfigurationResponse)
    Q_DISABLE_COPY(UpdateIdentityProviderConfigurationResponsePrivate)

};

} // namespace WorkLink
} // namespace QtAws

#endif
