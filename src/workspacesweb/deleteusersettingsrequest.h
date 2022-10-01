// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERSETTINGSREQUEST_H
#define QTAWS_DELETEUSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteUserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT DeleteUserSettingsRequest : public WorkSpacesWebRequest {

public:
    DeleteUserSettingsRequest(const DeleteUserSettingsRequest &other);
    DeleteUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
