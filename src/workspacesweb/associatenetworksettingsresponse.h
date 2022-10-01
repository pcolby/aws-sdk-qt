// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATENETWORKSETTINGSRESPONSE_H
#define QTAWS_ASSOCIATENETWORKSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "associatenetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateNetworkSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT AssociateNetworkSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    AssociateNetworkSettingsResponse(const AssociateNetworkSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateNetworkSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateNetworkSettingsResponse)
    Q_DISABLE_COPY(AssociateNetworkSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
