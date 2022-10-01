// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUOTATASKRESPONSE_H
#define QTAWS_UPDATEFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "updatefuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateFuotaTaskResponse(const UpdateFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFuotaTaskResponse)
    Q_DISABLE_COPY(UpdateFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
