// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSETTINGSREQUEST_H
#define QTAWS_LISTUSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListUserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT ListUserSettingsRequest : public WorkSpacesWebRequest {

public:
    ListUserSettingsRequest(const ListUserSettingsRequest &other);
    ListUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
