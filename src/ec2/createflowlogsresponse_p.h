// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLOWLOGSRESPONSE_P_H
#define QTAWS_CREATEFLOWLOGSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class CreateFlowLogsResponse;

class CreateFlowLogsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit CreateFlowLogsResponsePrivate(CreateFlowLogsResponse * const q);

    void parseCreateFlowLogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFlowLogsResponse)
    Q_DISABLE_COPY(CreateFlowLogsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
