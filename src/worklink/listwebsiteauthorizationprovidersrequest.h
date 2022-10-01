// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWEBSITEAUTHORIZATIONPROVIDERSREQUEST_H
#define QTAWS_LISTWEBSITEAUTHORIZATIONPROVIDERSREQUEST_H

#include "worklinkrequest.h"

namespace QtAws {
namespace WorkLink {

class ListWebsiteAuthorizationProvidersRequestPrivate;

class QTAWSWORKLINK_EXPORT ListWebsiteAuthorizationProvidersRequest : public WorkLinkRequest {

public:
    ListWebsiteAuthorizationProvidersRequest(const ListWebsiteAuthorizationProvidersRequest &other);
    ListWebsiteAuthorizationProvidersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWebsiteAuthorizationProvidersRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
