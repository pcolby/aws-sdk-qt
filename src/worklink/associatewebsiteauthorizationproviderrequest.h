// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWEBSITEAUTHORIZATIONPROVIDERREQUEST_H
#define QTAWS_ASSOCIATEWEBSITEAUTHORIZATIONPROVIDERREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class AssociateWebsiteAuthorizationProviderRequestPrivate;

class QTAWSWORKLINK_EXPORT AssociateWebsiteAuthorizationProviderRequest : public WorkLinkRequest {

public:
    AssociateWebsiteAuthorizationProviderRequest(const AssociateWebsiteAuthorizationProviderRequest &other);
    AssociateWebsiteAuthorizationProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWebsiteAuthorizationProviderRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
