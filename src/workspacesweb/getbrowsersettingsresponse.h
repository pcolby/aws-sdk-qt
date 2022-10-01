// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBROWSERSETTINGSRESPONSE_H
#define QTAWS_GETBROWSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "getbrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetBrowserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT GetBrowserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    GetBrowserSettingsResponse(const GetBrowserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBrowserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBrowserSettingsResponse)
    Q_DISABLE_COPY(GetBrowserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
