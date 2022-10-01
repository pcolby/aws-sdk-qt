// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUOTATASKRESPONSE_H
#define QTAWS_DELETEFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletefuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteFuotaTaskResponse(const DeleteFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFuotaTaskResponse)
    Q_DISABLE_COPY(DeleteFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
