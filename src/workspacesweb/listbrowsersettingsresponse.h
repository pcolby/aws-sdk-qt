// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBROWSERSETTINGSRESPONSE_H
#define QTAWS_LISTBROWSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "listbrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListBrowserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT ListBrowserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    ListBrowserSettingsResponse(const ListBrowserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListBrowserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBrowserSettingsResponse)
    Q_DISABLE_COPY(ListBrowserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
