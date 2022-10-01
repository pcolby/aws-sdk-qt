// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSETTINGSREQUEST_H
#define QTAWS_UPDATENETWORKSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateNetworkSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateNetworkSettingsRequest : public WorkSpacesWebRequest {

public:
    UpdateNetworkSettingsRequest(const UpdateNetworkSettingsRequest &other);
    UpdateNetworkSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
