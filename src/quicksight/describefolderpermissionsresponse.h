// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEFOLDERPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "describefolderpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeFolderPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeFolderPermissionsResponse(const DescribeFolderPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFolderPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFolderPermissionsResponse)
    Q_DISABLE_COPY(DescribeFolderPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
