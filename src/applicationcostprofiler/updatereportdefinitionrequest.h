// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPORTDEFINITIONREQUEST_H
#define QTAWS_UPDATEREPORTDEFINITIONREQUEST_H

#include "applicationcostprofilerrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class UpdateReportDefinitionRequestPrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT UpdateReportDefinitionRequest : public ApplicationCostProfilerRequest {

public:
    UpdateReportDefinitionRequest(const UpdateReportDefinitionRequest &other);
    UpdateReportDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReportDefinitionRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
