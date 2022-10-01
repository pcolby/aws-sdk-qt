// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEPIPELINERESPONSE_P_H
#define QTAWS_DEACTIVATEPIPELINERESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class DeactivatePipelineResponse;

class DeactivatePipelineResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit DeactivatePipelineResponsePrivate(DeactivatePipelineResponse * const q);

    void parseDeactivatePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeactivatePipelineResponse)
    Q_DISABLE_COPY(DeactivatePipelineResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
