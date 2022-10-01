// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEEVENTSOURCERESPONSE_H
#define QTAWS_ACTIVATEEVENTSOURCERESPONSE_H

#include "eventbridgeresponse.h"
#include "activateeventsourcerequest.h"

namespace QtAws {
namespace EventBridge {

class ActivateEventSourceResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT ActivateEventSourceResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    ActivateEventSourceResponse(const ActivateEventSourceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ActivateEventSourceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateEventSourceResponse)
    Q_DISABLE_COPY(ActivateEventSourceResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
