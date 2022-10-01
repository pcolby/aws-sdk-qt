// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMULTICASTGROUPFROMFUOTATASKRESPONSE_H
#define QTAWS_DISASSOCIATEMULTICASTGROUPFROMFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "disassociatemulticastgroupfromfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateMulticastGroupFromFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateMulticastGroupFromFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DisassociateMulticastGroupFromFuotaTaskResponse(const DisassociateMulticastGroupFromFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateMulticastGroupFromFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMulticastGroupFromFuotaTaskResponse)
    Q_DISABLE_COPY(DisassociateMulticastGroupFromFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
