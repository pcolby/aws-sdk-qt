// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSDATARESPONSE_H
#define QTAWS_IOTEVENTSDATARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsioteventsdataglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoTEventsData {

class IoTEventsDataResponsePrivate;

class QTAWSIOTEVENTSDATA_EXPORT IoTEventsDataResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTEventsDataResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTEventsDataResponse(IoTEventsDataResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTEventsDataResponse)
    Q_DISABLE_COPY(IoTEventsDataResponse)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
