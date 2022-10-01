// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKSETTINGSRESPONSE_H
#define QTAWS_CREATENETWORKSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "createnetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateNetworkSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateNetworkSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    CreateNetworkSettingsResponse(const CreateNetworkSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkSettingsResponse)
    Q_DISABLE_COPY(CreateNetworkSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
