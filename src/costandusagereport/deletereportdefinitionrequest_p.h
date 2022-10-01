// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTDEFINITIONREQUEST_P_H
#define QTAWS_DELETEREPORTDEFINITIONREQUEST_P_H

#include "costandusagereportrequest_p.h"
#include "deletereportdefinitionrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class DeleteReportDefinitionRequest;

class DeleteReportDefinitionRequestPrivate : public CostandUsageReportRequestPrivate {

public:
    DeleteReportDefinitionRequestPrivate(const CostandUsageReportRequest::Action action,
                                   DeleteReportDefinitionRequest * const q);
    DeleteReportDefinitionRequestPrivate(const DeleteReportDefinitionRequestPrivate &other,
                                   DeleteReportDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteReportDefinitionRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
