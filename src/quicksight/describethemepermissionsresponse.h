// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBETHEMEPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "describethemepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemePermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeThemePermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeThemePermissionsResponse(const DescribeThemePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeThemePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThemePermissionsResponse)
    Q_DISABLE_COPY(DescribeThemePermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
