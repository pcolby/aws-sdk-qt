// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEEVENTSOURCERESPONSE_H
#define QTAWS_DEACTIVATEEVENTSOURCERESPONSE_H

#include "eventbridgeresponse.h"
#include "deactivateeventsourcerequest.h"

namespace QtAws {
namespace EventBridge {

class DeactivateEventSourceResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT DeactivateEventSourceResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    DeactivateEventSourceResponse(const DeactivateEventSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeactivateEventSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateEventSourceResponse)
    Q_DISABLE_COPY(DeactivateEventSourceResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
