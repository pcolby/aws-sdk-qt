// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSREPORTSTATUSREQUEST_P_H
#define QTAWS_GETFINDINGSREPORTSTATUSREQUEST_P_H

#include "inspector2request_p.h"
#include "getfindingsreportstatusrequest.h"

namespace QtAws {
namespace Inspector2 {

class GetFindingsReportStatusRequest;

class GetFindingsReportStatusRequestPrivate : public Inspector2RequestPrivate {

public:
    GetFindingsReportStatusRequestPrivate(const Inspector2Request::Action action,
                                   GetFindingsReportStatusRequest * const q);
    GetFindingsReportStatusRequestPrivate(const GetFindingsReportStatusRequestPrivate &other,
                                   GetFindingsReportStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFindingsReportStatusRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
