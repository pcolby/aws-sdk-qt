// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTERESPONSE_H
#define QTAWS_UPDATEROUTERESPONSE_H

#include "migrationhubrefactorspacesresponse.h"
#include "updaterouterequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class UpdateRouteResponsePrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT UpdateRouteResponse : public MigrationHubRefactorSpacesResponse {
    Q_OBJECT

public:
    UpdateRouteResponse(const UpdateRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRouteResponse)
    Q_DISABLE_COPY(UpdateRouteResponse)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
