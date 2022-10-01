// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSETTINGSRESPONSE_H
#define QTAWS_LISTNETWORKSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "listnetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListNetworkSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT ListNetworkSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    ListNetworkSettingsResponse(const ListNetworkSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNetworkSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworkSettingsResponse)
    Q_DISABLE_COPY(ListNetworkSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
