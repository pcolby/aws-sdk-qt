// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFOLDERRESOLVEDPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBEFOLDERRESOLVEDPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "describefolderresolvedpermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeFolderResolvedPermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeFolderResolvedPermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeFolderResolvedPermissionsResponse(const DescribeFolderResolvedPermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFolderResolvedPermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFolderResolvedPermissionsResponse)
    Q_DISABLE_COPY(DescribeFolderResolvedPermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
