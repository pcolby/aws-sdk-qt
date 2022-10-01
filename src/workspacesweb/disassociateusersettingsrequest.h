// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERSETTINGSREQUEST_H
#define QTAWS_DISASSOCIATEUSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateUserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT DisassociateUserSettingsRequest : public WorkSpacesWebRequest {

public:
    DisassociateUserSettingsRequest(const DisassociateUserSettingsRequest &other);
    DisassociateUserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateUserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
