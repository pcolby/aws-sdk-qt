// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBROWSERSETTINGSRESPONSE_H
#define QTAWS_CREATEBROWSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "createbrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateBrowserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateBrowserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    CreateBrowserSettingsResponse(const CreateBrowserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBrowserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBrowserSettingsResponse)
    Q_DISABLE_COPY(CreateBrowserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
