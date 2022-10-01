// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPORTDEFINITIONREQUEST_H
#define QTAWS_PUTREPORTDEFINITIONREQUEST_H

#include "costandusagereportrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class PutReportDefinitionRequestPrivate;

class QTAWSCOSTANDUSAGEREPORT_EXPORT PutReportDefinitionRequest : public CostandUsageReportRequest {

public:
    PutReportDefinitionRequest(const PutReportDefinitionRequest &other);
    PutReportDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutReportDefinitionRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
