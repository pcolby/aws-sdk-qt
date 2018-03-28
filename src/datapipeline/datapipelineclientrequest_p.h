/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DATAPIPELINECLIENTREQUEST_P_H
#define QTAWS_DATAPIPELINECLIENTREQUEST_P_H

#include "datapipeline_p.h"
#include "request.h"

namespace AWS {

namespace DataPipeline {

class DataPipelineClientRequest;

class QTAWS_EXPORT DataPipelineClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    DataPipelineClientRequest::Action action; ///< DataPipeline action to be performed.
    QString apiVersion;        ///< DataPipeline API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DataPipeline request (query string) parameters. @todo?

    DataPipelineClientRequestPrivate(const DataPipelineClientRequest::Action action, DataPipelineClientRequest * const q);
    DataPipelineClientRequestPrivate(const RequestPrivate &other, DataPipelineClientRequest * const q);

    static QString toString(const DataPipelineClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DataPipelineClientRequest)

};

} // namespace DataPipeline
} // namespace AWS

#endif
