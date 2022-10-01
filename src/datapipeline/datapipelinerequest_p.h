// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATAPIPELINEREQUEST_P_H
#define QTAWS_DATAPIPELINEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DataPipelineRequest;

class DataPipelineRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DataPipelineRequest::Action action; ///< DataPipeline action to be performed.
    QString apiVersion;        ///< DataPipeline API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DataPipeline request (query string) parameters. @todo?

    DataPipelineRequestPrivate(const DataPipelineRequest::Action action, DataPipelineRequest * const q);
    DataPipelineRequestPrivate(const DataPipelineRequestPrivate &other, DataPipelineRequest * const q);

    static QString toString(const DataPipelineRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DataPipelineRequest)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
