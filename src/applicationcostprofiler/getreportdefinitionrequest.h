// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREPORTDEFINITIONREQUEST_H
#define QTAWS_GETREPORTDEFINITIONREQUEST_H

#include "applicationcostprofilerrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class GetReportDefinitionRequestPrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT GetReportDefinitionRequest : public ApplicationCostProfilerRequest {

public:
    GetReportDefinitionRequest(const GetReportDefinitionRequest &other);
    GetReportDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetReportDefinitionRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
