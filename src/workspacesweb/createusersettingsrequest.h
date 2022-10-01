// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERSETTINGSREQUEST_H
#define QTAWS_CREATEUSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateUserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateUserSettingsRequest : public WorkSpacesWebRequest {

public:
    CreateUserSettingsRequest(const CreateUserSettingsRequest &other);
    CreateUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
