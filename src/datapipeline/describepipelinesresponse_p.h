// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPIPELINESRESPONSE_P_H
#define QTAWS_DESCRIBEPIPELINESRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class DescribePipelinesResponse;

class DescribePipelinesResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit DescribePipelinesResponsePrivate(DescribePipelinesResponse * const q);

    void parseDescribePipelinesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribePipelinesResponse)
    Q_DISABLE_COPY(DescribePipelinesResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
