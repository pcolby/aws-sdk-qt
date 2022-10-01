// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEQUEUEQUICKCONNECTSRESPONSE_P_H
#define QTAWS_DISASSOCIATEQUEUEQUICKCONNECTSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DisassociateQueueQuickConnectsResponse;

class DisassociateQueueQuickConnectsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DisassociateQueueQuickConnectsResponsePrivate(DisassociateQueueQuickConnectsResponse * const q);

    void parseDisassociateQueueQuickConnectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateQueueQuickConnectsResponse)
    Q_DISABLE_COPY(DisassociateQueueQuickConnectsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
