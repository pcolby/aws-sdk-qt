// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKSETTINGSRESPONSE_H
#define QTAWS_DELETENETWORKSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "deletenetworksettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteNetworkSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DeleteNetworkSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DeleteNetworkSettingsResponse(const DeleteNetworkSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkSettingsResponse)
    Q_DISABLE_COPY(DeleteNetworkSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
