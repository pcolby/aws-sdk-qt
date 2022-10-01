// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFUOTATASKRESPONSE_H
#define QTAWS_STARTFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "startfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class StartFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT StartFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    StartFuotaTaskResponse(const StartFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFuotaTaskResponse)
    Q_DISABLE_COPY(StartFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
