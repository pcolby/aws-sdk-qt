// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSETTINGSRESPONSE_H
#define QTAWS_LISTUSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "listusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListUserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT ListUserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    ListUserSettingsResponse(const ListUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUserSettingsResponse)
    Q_DISABLE_COPY(ListUserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
