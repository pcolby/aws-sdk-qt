// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSTATUSRESPONSE_P_H
#define QTAWS_SETSTATUSRESPONSE_P_H

#include "datapipelineresponse_p.h"

namespace QtAws {
namespace DataPipeline {

class SetStatusResponse;

class SetStatusResponsePrivate : public DataPipelineResponsePrivate {

public:

    explicit SetStatusResponsePrivate(SetStatusResponse * const q);

    void parseSetStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetStatusResponse)
    Q_DISABLE_COPY(SetStatusResponsePrivate)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
