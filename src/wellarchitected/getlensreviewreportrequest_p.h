// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLENSREVIEWREPORTREQUEST_P_H
#define QTAWS_GETLENSREVIEWREPORTREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "getlensreviewreportrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetLensReviewReportRequest;

class GetLensReviewReportRequestPrivate : public WellArchitectedRequestPrivate {

public:
    GetLensReviewReportRequestPrivate(const WellArchitectedRequest::Action action,
                                   GetLensReviewReportRequest * const q);
    GetLensReviewReportRequestPrivate(const GetLensReviewReportRequestPrivate &other,
                                   GetLensReviewReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetLensReviewReportRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
