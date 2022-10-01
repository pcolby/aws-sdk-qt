// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERREQUEST_H
#define QTAWS_UPDATEIDENTITYPROVIDERREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateIdentityProviderRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateIdentityProviderRequest : public WorkSpacesWebRequest {

public:
    UpdateIdentityProviderRequest(const UpdateIdentityProviderRequest &other);
    UpdateIdentityProviderRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIdentityProviderRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
