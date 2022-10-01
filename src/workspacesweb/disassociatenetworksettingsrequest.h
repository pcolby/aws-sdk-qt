// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATENETWORKSETTINGSREQUEST_H
#define QTAWS_DISASSOCIATENETWORKSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateNetworkSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT DisassociateNetworkSettingsRequest : public WorkSpacesWebRequest {

public:
    DisassociateNetworkSettingsRequest(const DisassociateNetworkSettingsRequest &other);
    DisassociateNetworkSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
