// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHDASHBOARDSREQUEST_H
#define QTAWS_SEARCHDASHBOARDSREQUEST_H

#include "quicksightrequest.h"

namespace QtAws {
namespace QuickSight {

class SearchDashboardsRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT SearchDashboardsRequest : public QuickSightRequest {

public:
    SearchDashboardsRequest(const SearchDashboardsRequest &other);
    SearchDashboardsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchDashboardsRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
