// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETPERMISSIONSRESPONSE_H
#define QTAWS_UPDATEDATASETPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "updatedatasetpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class UpdateDataSetPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT UpdateDataSetPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    UpdateDataSetPermissionsResponse(const UpdateDataSetPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDataSetPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDataSetPermissionsResponse)
    Q_DISABLE_COPY(UpdateDataSetPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
