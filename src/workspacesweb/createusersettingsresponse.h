// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERSETTINGSRESPONSE_H
#define QTAWS_CREATEUSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "createusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateUserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateUserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    CreateUserSettingsResponse(const CreateUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserSettingsResponse)
    Q_DISABLE_COPY(CreateUserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
