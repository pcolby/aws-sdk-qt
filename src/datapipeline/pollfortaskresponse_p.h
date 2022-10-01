// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORTASKRESPONSE_P_H
#define QTAWS_POLLFORTASKRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class PollForTaskResponse;

class PollForTaskResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit PollForTaskResponsePrivate(PollForTaskResponse * const q);

    void parsePollForTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PollForTaskResponse)
    Q_DISABLE_COPY(PollForTaskResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
