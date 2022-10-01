// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEQUEUEQUICKCONNECTSRESPONSE_P_H
#define QTAWS_ASSOCIATEQUEUEQUICKCONNECTSRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateQueueQuickConnectsResponse;

class AssociateQueueQuickConnectsResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateQueueQuickConnectsResponsePrivate(AssociateQueueQuickConnectsResponse * const q);

    void parseAssociateQueueQuickConnectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateQueueQuickConnectsResponse)
    Q_DISABLE_COPY(AssociateQueueQuickConnectsResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
