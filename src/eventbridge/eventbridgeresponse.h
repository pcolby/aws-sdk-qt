// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVENTBRIDGERESPONSE_H
#define QTAWS_EVENTBRIDGERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawseventbridgeglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace EventBridge {

class EventBridgeResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT EventBridgeResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EventBridgeResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EventBridgeResponse(EventBridgeResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EventBridgeResponse)
    Q_DISABLE_COPY(EventBridgeResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
