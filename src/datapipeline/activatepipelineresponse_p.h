// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEPIPELINERESPONSE_P_H
#define QTAWS_ACTIVATEPIPELINERESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class ActivatePipelineResponse;

class ActivatePipelineResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit ActivatePipelineResponsePrivate(ActivatePipelineResponse * const q);

    void parseActivatePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivatePipelineResponse)
    Q_DISABLE_COPY(ActivatePipelineResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
