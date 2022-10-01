// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERSETTINGSRESPONSE_H
#define QTAWS_DELETEUSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "deleteusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteUserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DeleteUserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DeleteUserSettingsResponse(const DeleteUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserSettingsResponse)
    Q_DISABLE_COPY(DeleteUserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
