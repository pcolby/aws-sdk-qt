// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEUSERSETTINGSRESPONSE_H
#define QTAWS_DISASSOCIATEUSERSETTINGSRESPONSE_H

#include "workspaceswebresponse.h"
#include "disassociateusersettingsrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateUserSettingsResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DisassociateUserSettingsResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DisassociateUserSettingsResponse(const DisassociateUserSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateUserSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateUserSettingsResponse)
    Q_DISABLE_COPY(DisassociateUserSettingsResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
