// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPORTDEFINITIONREQUEST_H
#define QTAWS_MODIFYREPORTDEFINITIONREQUEST_H

#include "costandusagereportrequest.h"

namespace QtAws {
namespace CostandUsageReport {

class ModifyReportDefinitionRequestPrivate;

class QTAWSCOSTANDUSAGEREPORT_EXPORT ModifyReportDefinitionRequest : public CostandUsageReportRequest {

public:
    ModifyReportDefinitionRequest(const ModifyReportDefinitionRequest &other);
    ModifyReportDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReportDefinitionRequest)

};

} // namespace CostandUsageReport
} // namespace QtAws

#endif
