// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPROVIDERREQUEST_H
#define QTAWS_GETIDENTITYPROVIDERREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetIdentityProviderRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT GetIdentityProviderRequest : public WorkSpacesWebRequest {

public:
    GetIdentityProviderRequest(const GetIdentityProviderRequest &other);
    GetIdentityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityProviderRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
