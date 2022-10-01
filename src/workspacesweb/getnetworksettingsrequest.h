// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKSETTINGSREQUEST_H
#define QTAWS_GETNETWORKSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetNetworkSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT GetNetworkSettingsRequest : public WorkSpacesWebRequest {

public:
    GetNetworkSettingsRequest(const GetNetworkSettingsRequest &other);
    GetNetworkSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
