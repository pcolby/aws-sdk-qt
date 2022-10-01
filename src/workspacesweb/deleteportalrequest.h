// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTALREQUEST_H
#define QTAWS_DELETEPORTALREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeletePortalRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT DeletePortalRequest : public WorkSpacesWebRequest {

public:
    DeletePortalRequest(const DeletePortalRequest &other);
    DeletePortalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePortalRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
