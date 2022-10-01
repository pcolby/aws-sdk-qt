// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREPORTDEFINITIONREQUEST_H
#define QTAWS_PUTREPORTDEFINITIONREQUEST_H

#include "applicationcostprofilerrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class PutReportDefinitionRequestPrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT PutReportDefinitionRequest : public ApplicationCostProfilerRequest {

public:
    PutReportDefinitionRequest(const PutReportDefinitionRequest &other);
    PutReportDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutReportDefinitionRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
