// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKSETTINGSRESPONSE_H
#define QTAWS_GETNETWORKSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "getnetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetNetworkSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT GetNetworkSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    GetNetworkSettingsResponse(const GetNetworkSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkSettingsResponse)
    Q_DISABLE_COPY(GetNetworkSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
