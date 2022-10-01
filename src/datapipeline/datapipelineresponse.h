// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATAPIPELINERESPONSE_H
#define QTAWS_DATAPIPELINERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdatapipelineglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace DataPipeline {

class DataPipelineResponsePrivate;

class QTAWSDATAPIPELINE_EXPORT DataPipelineResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DataPipelineResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DataPipelineResponse(DataPipelineResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DataPipelineResponse)
    Q_DISABLE_COPY(DataPipelineResponse)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
