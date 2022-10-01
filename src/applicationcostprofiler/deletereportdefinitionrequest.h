// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPORTDEFINITIONREQUEST_H
#define QTAWS_DELETEREPORTDEFINITIONREQUEST_H

#include "applicationcostprofilerrequest.h"

namespace QtAws {
namespace ApplicationCostProfiler {

class DeleteReportDefinitionRequestPrivate;

class QTAWSAPPLICATIONCOSTPROFILER_EXPORT DeleteReportDefinitionRequest : public ApplicationCostProfilerRequest {

public:
    DeleteReportDefinitionRequest(const DeleteReportDefinitionRequest &other);
    DeleteReportDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReportDefinitionRequest)

};

} // namespace ApplicationCostProfiler
} // namespace QtAws

#endif
