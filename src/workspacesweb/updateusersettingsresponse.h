// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERSETTINGSRESPONSE_H
#define QTAWS_UPDATEUSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "updateusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateUserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateUserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    UpdateUserSettingsResponse(const UpdateUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserSettingsResponse)
    Q_DISABLE_COPY(UpdateUserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
