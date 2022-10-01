// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPORTTASKPROGRESSREQUEST_H
#define QTAWS_REPORTTASKPROGRESSREQUEST_H

#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class ReportTaskProgressRequestPrivate;

class QTAWSDATAPIPELINE_EXPORT ReportTaskProgressRequest : public DataPipelineRequest {

public:
    ReportTaskProgressRequest(const ReportTaskProgressRequest &other);
    ReportTaskProgressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReportTaskProgressRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
