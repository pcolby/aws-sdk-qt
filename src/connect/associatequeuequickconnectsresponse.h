// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEQUEUEQUICKCONNECTSRESPONSE_H
#define QTAWS_ASSOCIATEQUEUEQUICKCONNECTSRESPONSE_H

#include "connectresponse.h"
#include "associatequeuequickconnectsrequest.h"

namespace QtAws {
namespace Connect {

class AssociateQueueQuickConnectsResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateQueueQuickConnectsResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateQueueQuickConnectsResponse(const AssociateQueueQuickConnectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateQueueQuickConnectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateQueueQuickConnectsResponse)
    Q_DISABLE_COPY(AssociateQueueQuickConnectsResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
