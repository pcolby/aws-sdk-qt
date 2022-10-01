// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUOTATASKRESPONSE_H
#define QTAWS_CREATEFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "createfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateFuotaTaskResponse(const CreateFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFuotaTaskResponse)
    Q_DISABLE_COPY(CreateFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
