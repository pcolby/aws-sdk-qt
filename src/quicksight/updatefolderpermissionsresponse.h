// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFOLDERPERMISSIONSRESPONSE_H
#define QTAWS_UPDATEFOLDERPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "updatefolderpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateFolderPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateFolderPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateFolderPermissionsResponse(const UpdateFolderPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFolderPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFolderPermissionsResponse)
    Q_DISABLE_COPY(UpdateFolderPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
