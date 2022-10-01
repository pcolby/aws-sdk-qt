// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLOWLOGSRESPONSE_P_H
#define QTAWS_DELETEFLOWLOGSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DeleteFlowLogsResponse;

class DeleteFlowLogsResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DeleteFlowLogsResponsePrivate(DeleteFlowLogsResponse * const q);

    void parseDeleteFlowLogsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFlowLogsResponse)
    Q_DISABLE_COPY(DeleteFlowLogsResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
