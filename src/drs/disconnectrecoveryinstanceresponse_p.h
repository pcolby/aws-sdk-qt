// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTRECOVERYINSTANCERESPONSE_P_H
#define QTAWS_DISCONNECTRECOVERYINSTANCERESPONSE_P_H

#include "drsresponse_p.h"

namespace QtAws {
namespace Drs {

class DisconnectRecoveryInstanceResponse;

class DisconnectRecoveryInstanceResponsePrivate : public DrsResponsePrivate {

public:

    explicit DisconnectRecoveryInstanceResponsePrivate(DisconnectRecoveryInstanceResponse * const q);

    void parseDisconnectRecoveryInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisconnectRecoveryInstanceResponse)
    Q_DISABLE_COPY(DisconnectRecoveryInstanceResponsePrivate)

};

} // namespace Drs
} // namespace QtAws

#endif
