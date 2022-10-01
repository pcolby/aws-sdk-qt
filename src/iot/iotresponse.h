// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTRESPONSE_H
#define QTAWS_IOTRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiotglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IoT {

class IoTResponsePrivate;

class QTAWSIOT_EXPORT IoTResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IoTResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IoTResponse(IoTResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTResponse)
    Q_DISABLE_COPY(IoTResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
