// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINESRESPONSE_P_H
#define QTAWS_LISTPIPELINESRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class ListPipelinesResponse;

class ListPipelinesResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit ListPipelinesResponsePrivate(ListPipelinesResponse * const q);

    void parseListPipelinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPipelinesResponse)
    Q_DISABLE_COPY(ListPipelinesResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
