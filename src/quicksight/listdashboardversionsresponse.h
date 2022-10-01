// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDASHBOARDVERSIONSRESPONSE_H
#define QTAWS_LISTDASHBOARDVERSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "listdashboardversionsrequest.h"

namespace QtAws {
namespace QuickSight {

class ListDashboardVersionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT ListDashboardVersionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    ListDashboardVersionsResponse(const ListDashboardVersionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDashboardVersionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDashboardVersionsResponse)
    Q_DISABLE_COPY(ListDashboardVersionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
