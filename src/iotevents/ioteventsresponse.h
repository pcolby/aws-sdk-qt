// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSRESPONSE_H
#define QTAWS_IOTEVENTSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsioteventsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTEvents {

class IoTEventsResponsePrivate;

class QTAWSIOTEVENTS_EXPORT IoTEventsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTEventsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTEventsResponse(IoTEventsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTEventsResponse)
    Q_DISABLE_COPY(IoTEventsResponse)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
