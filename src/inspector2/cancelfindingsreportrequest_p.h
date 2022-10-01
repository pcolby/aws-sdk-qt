// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELFINDINGSREPORTREQUEST_P_H
#define QTAWS_CANCELFINDINGSREPORTREQUEST_P_H

#include "inspector2request_p.h"
#include "cancelfindingsreportrequest.h"

namespace QtAws {
namespace Inspector2 {

class CancelFindingsReportRequest;

class CancelFindingsReportRequestPrivate : public Inspector2RequestPrivate {

public:
    CancelFindingsReportRequestPrivate(const Inspector2Request::Action action,
                                   CancelFindingsReportRequest * const q);
    CancelFindingsReportRequestPrivate(const CancelFindingsReportRequestPrivate &other,
                                   CancelFindingsReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelFindingsReportRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
