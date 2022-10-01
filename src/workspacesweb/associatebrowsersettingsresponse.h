// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBROWSERSETTINGSRESPONSE_H
#define QTAWS_ASSOCIATEBROWSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "associatebrowsersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateBrowserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT AssociateBrowserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    AssociateBrowserSettingsResponse(const AssociateBrowserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateBrowserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateBrowserSettingsResponse)
    Q_DISABLE_COPY(AssociateBrowserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
