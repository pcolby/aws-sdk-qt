// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKSETTINGSREQUEST_H
#define QTAWS_CREATENETWORKSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateNetworkSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateNetworkSettingsRequest : public WorkSpacesWebRequest {

public:
    CreateNetworkSettingsRequest(const CreateNetworkSettingsRequest &other);
    CreateNetworkSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
