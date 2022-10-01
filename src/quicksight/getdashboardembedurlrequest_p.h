// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDASHBOARDEMBEDURLREQUEST_P_H
#define QTAWS_GETDASHBOARDEMBEDURLREQUEST_P_H

#include "quicksightrequest_p.h"
#include "getdashboardembedurlrequest.h"

namespace QtAws {
namespace QuickSight {

class GetDashboardEmbedUrlRequest;

class GetDashboardEmbedUrlRequestPrivate : public QuickSightRequestPrivate {

public:
    GetDashboardEmbedUrlRequestPrivate(const QuickSightRequest::Action action,
                                   GetDashboardEmbedUrlRequest * const q);
    GetDashboardEmbedUrlRequestPrivate(const GetDashboardEmbedUrlRequestPrivate &other,
                                   GetDashboardEmbedUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDashboardEmbedUrlRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
