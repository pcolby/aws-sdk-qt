// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSETTINGSRESPONSE_H
#define QTAWS_UPDATENETWORKSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "updatenetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateNetworkSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateNetworkSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    UpdateNetworkSettingsResponse(const UpdateNetworkSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNetworkSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkSettingsResponse)
    Q_DISABLE_COPY(UpdateNetworkSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
