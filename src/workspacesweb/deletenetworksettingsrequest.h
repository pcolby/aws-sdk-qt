// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKSETTINGSREQUEST_H
#define QTAWS_DELETENETWORKSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteNetworkSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT DeleteNetworkSettingsRequest : public WorkSpacesWebRequest {

public:
    DeleteNetworkSettingsRequest(const DeleteNetworkSettingsRequest &other);
    DeleteNetworkSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
