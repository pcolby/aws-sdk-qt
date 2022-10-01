// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERSETTINGSREQUEST_H
#define QTAWS_ASSOCIATEUSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateUserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT AssociateUserSettingsRequest : public WorkSpacesWebRequest {

public:
    AssociateUserSettingsRequest(const AssociateUserSettingsRequest &other);
    AssociateUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
