// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEUSERSETTINGSRESPONSE_H
#define QTAWS_ASSOCIATEUSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "associateusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateUserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT AssociateUserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    AssociateUserSettingsResponse(const AssociateUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateUserSettingsResponse)
    Q_DISABLE_COPY(AssociateUserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
