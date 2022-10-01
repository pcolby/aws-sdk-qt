// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUOTATASKRESPONSE_H
#define QTAWS_GETFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "getfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetFuotaTaskResponse(const GetFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFuotaTaskResponse)
    Q_DISABLE_COPY(GetFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
