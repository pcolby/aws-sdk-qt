// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERCONFIGURATIONREQUEST_H
#define QTAWS_UPDATEIDENTITYPROVIDERCONFIGURATIONREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class UpdateIdentityProviderConfigurationRequestPrivate;

class QTAWSWORKLINK_EXPORT UpdateIdentityProviderConfigurationRequest : public WorkLinkRequest {

public:
    UpdateIdentityProviderConfigurationRequest(const UpdateIdentityProviderConfigurationRequest &other);
    UpdateIdentityProviderConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIdentityProviderConfigurationRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
