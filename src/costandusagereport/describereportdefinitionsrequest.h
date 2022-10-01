// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTDEFINITIONSREQUEST_H
#define QTAWS_DESCRIBEREPORTDEFINITIONSREQUEST_H

#include "costandusagereportrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class DescribeReportDefinitionsRequestPrivate;

class QTAWSCOSTANDUSAGEREPORT_EXPORT DescribeReportDefinitionsRequest : public CostandUsageReportRequest {

public:
    DescribeReportDefinitionsRequest(const DescribeReportDefinitionsRequest &other);
    DescribeReportDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReportDefinitionsRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
