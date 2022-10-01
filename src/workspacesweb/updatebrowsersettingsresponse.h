// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROWSERSETTINGSRESPONSE_H
#define QTAWS_UPDATEBROWSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "updatebrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateBrowserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateBrowserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    UpdateBrowserSettingsResponse(const UpdateBrowserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBrowserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrowserSettingsResponse)
    Q_DISABLE_COPY(UpdateBrowserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
