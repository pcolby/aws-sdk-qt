// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBROWSERSETTINGSRESPONSE_H
#define QTAWS_DISASSOCIATEBROWSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "disassociatebrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateBrowserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DisassociateBrowserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DisassociateBrowserSettingsResponse(const DisassociateBrowserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateBrowserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateBrowserSettingsResponse)
    Q_DISABLE_COPY(DisassociateBrowserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
