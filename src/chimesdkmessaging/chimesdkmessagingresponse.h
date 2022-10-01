// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMESSAGINGRESPONSE_H
#define QTAWS_CHIMESDKMESSAGINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawschimesdkmessagingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class ChimeSdkMessagingResponsePrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT ChimeSdkMessagingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ChimeSdkMessagingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ChimeSdkMessagingResponse(ChimeSdkMessagingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChimeSdkMessagingResponse)
    Q_DISABLE_COPY(ChimeSdkMessagingResponse)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
