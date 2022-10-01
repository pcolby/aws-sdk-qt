// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATENETWORKSETTINGSREQUEST_H
#define QTAWS_ASSOCIATENETWORKSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateNetworkSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT AssociateNetworkSettingsRequest : public WorkSpacesWebRequest {

public:
    AssociateNetworkSettingsRequest(const AssociateNetworkSettingsRequest &other);
    AssociateNetworkSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
