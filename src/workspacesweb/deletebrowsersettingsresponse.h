// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBROWSERSETTINGSRESPONSE_H
#define QTAWS_DELETEBROWSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "deletebrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteBrowserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DeleteBrowserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DeleteBrowserSettingsResponse(const DeleteBrowserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBrowserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBrowserSettingsResponse)
    Q_DISABLE_COPY(DeleteBrowserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
