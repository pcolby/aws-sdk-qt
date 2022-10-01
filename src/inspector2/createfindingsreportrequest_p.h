// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFINDINGSREPORTREQUEST_P_H
#define QTAWS_CREATEFINDINGSREPORTREQUEST_P_H

#include "inspector2request_p.h"
#include "createfindingsreportrequest.h"

namespace QtAws {
namespace Inspector2 {

class CreateFindingsReportRequest;

class CreateFindingsReportRequestPrivate : public Inspector2RequestPrivate {

public:
    CreateFindingsReportRequestPrivate(const Inspector2Request::Action action,
                                   CreateFindingsReportRequest * const q);
    CreateFindingsReportRequestPrivate(const CreateFindingsReportRequestPrivate &other,
                                   CreateFindingsReportRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFindingsReportRequest)

};

} // namespace Inspector2
} // namespace QtAws

#endif
