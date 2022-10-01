// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPERMISSIONSRESPONSE_H
#define QTAWS_UPDATEPERMISSIONSRESPONSE_H

#include "grafanaresponse.h"
#include "updatepermissionsrequest.h"

namespace QtAws {
namespace Grafana {

class UpdatePermissionsResponsePrivate;

class QTAWSGRAFANA_EXPORT UpdatePermissionsResponse : public GrafanaResponse {
    Q_OBJECT

public:
    UpdatePermissionsResponse(const UpdatePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePermissionsResponse)
    Q_DISABLE_COPY(UpdatePermissionsResponse)

};

} // namespace Grafana
} // namespace QtAws

#endif
