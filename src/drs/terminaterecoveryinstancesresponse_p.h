// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATERECOVERYINSTANCESRESPONSE_P_H
#define QTAWS_TERMINATERECOVERYINSTANCESRESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class TerminateRecoveryInstancesResponse;

class TerminateRecoveryInstancesResponsePrivate : public DrsResponsePrivate {

public:

    explicit TerminateRecoveryInstancesResponsePrivate(TerminateRecoveryInstancesResponse * const q);

    void parseTerminateRecoveryInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateRecoveryInstancesResponse)
    Q_DISABLE_COPY(TerminateRecoveryInstancesResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
