// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCHANGEREQUESTEXECUTIONRESPONSE_P_H
#define QTAWS_STARTCHANGEREQUESTEXECUTIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class StartChangeRequestExecutionResponse;

class StartChangeRequestExecutionResponsePrivate : public SsmResponsePrivate {

public:

    explicit StartChangeRequestExecutionResponsePrivate(StartChangeRequestExecutionResponse * const q);

    void parseStartChangeRequestExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartChangeRequestExecutionResponse)
    Q_DISABLE_COPY(StartChangeRequestExecutionResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
