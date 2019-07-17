/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DATAPIPELINEREQUEST_P_H
#define QTAWS_DATAPIPELINEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "datapipelinerequest.h"

namespace QtAws {
namespace DataPipeline {

class DataPipelineRequest;

class QTAWS_EXPORT DataPipelineRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
