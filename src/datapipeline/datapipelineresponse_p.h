// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATAPIPELINERESPONSE_P_H
#define QTAWS_DATAPIPELINERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class DataPipelineResponse;

class DataPipelineResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit DataPipelineResponsePrivate(DataPipelineResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DataPipelineResponse)
    Q_DISABLE_COPY(DataPipelineResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
