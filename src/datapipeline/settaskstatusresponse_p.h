// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTASKSTATUSRESPONSE_P_H
#define QTAWS_SETTASKSTATUSRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class SetTaskStatusResponse;

class SetTaskStatusResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit SetTaskStatusResponsePrivate(SetTaskStatusResponse * const q);

    void parseSetTaskStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetTaskStatusResponse)
    Q_DISABLE_COPY(SetTaskStatusResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
