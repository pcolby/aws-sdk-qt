// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHEMEPERMISSIONSRESPONSE_H
#define QTAWS_UPDATETHEMEPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "updatethemepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateThemePermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateThemePermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateThemePermissionsResponse(const UpdateThemePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateThemePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateThemePermissionsResponse)
    Q_DISABLE_COPY(UpdateThemePermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
