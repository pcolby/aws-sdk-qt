// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPIPELINERESPONSE_P_H
#define QTAWS_DELETEPIPELINERESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class DeletePipelineResponse;

class DeletePipelineResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit DeletePipelineResponsePrivate(DeletePipelineResponse * const q);

    void parseDeletePipelineResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePipelineResponse)
    Q_DISABLE_COPY(DeletePipelineResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
