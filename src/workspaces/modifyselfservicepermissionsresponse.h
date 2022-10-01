// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSELFSERVICEPERMISSIONSRESPONSE_H
#define QTAWS_MODIFYSELFSERVICEPERMISSIONSRESPONSE_H

#include "workspacesresponse.h"
#include "modifyselfservicepermissionsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifySelfservicePermissionsResponsePrivate;

class QTAWSWORKSPACES_EXPORT ModifySelfservicePermissionsResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    ModifySelfservicePermissionsResponse(const ModifySelfservicePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifySelfservicePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySelfservicePermissionsResponse)
    Q_DISABLE_COPY(ModifySelfservicePermissionsResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
