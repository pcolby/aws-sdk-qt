// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASOURCEPERMISSIONSRESPONSE_H
#define QTAWS_UPDATEDATASOURCEPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "updatedatasourcepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSourcePermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDataSourcePermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateDataSourcePermissionsResponse(const UpdateDataSourcePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDataSourcePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataSourcePermissionsResponse)
    Q_DISABLE_COPY(UpdateDataSourcePermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
