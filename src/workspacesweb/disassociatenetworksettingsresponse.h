// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATENETWORKSETTINGSRESPONSE_H
#define QTAWS_DISASSOCIATENETWORKSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "disassociatenetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateNetworkSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DisassociateNetworkSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DisassociateNetworkSettingsResponse(const DisassociateNetworkSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateNetworkSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateNetworkSettingsResponse)
    Q_DISABLE_COPY(DisassociateNetworkSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
