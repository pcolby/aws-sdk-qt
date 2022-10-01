// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSETTINGSREQUEST_H
#define QTAWS_UPDATEUSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateUserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateUserSettingsRequest : public WorkSpacesWebRequest {

public:
    UpdateUserSettingsRequest(const UpdateUserSettingsRequest &other);
    UpdateUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
