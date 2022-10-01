// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTALREQUEST_H
#define QTAWS_CREATEPORTALREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreatePortalRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT CreatePortalRequest : public WorkSpacesWebRequest {

public:
    CreatePortalRequest(const CreatePortalRequest &other);
    CreatePortalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePortalRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
