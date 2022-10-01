// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDASHBOARDSRESPONSE_H
#define QTAWS_SEARCHDASHBOARDSRESPONSE_H

#include "quicksightresponse.h"
#include "searchdashboardsrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchDashboardsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT SearchDashboardsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    SearchDashboardsResponse(const SearchDashboardsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchDashboardsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchDashboardsResponse)
    Q_DISABLE_COPY(SearchDashboardsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
