// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMULTICASTGROUPWITHFUOTATASKRESPONSE_H
#define QTAWS_ASSOCIATEMULTICASTGROUPWITHFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "associatemulticastgroupwithfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateMulticastGroupWithFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateMulticastGroupWithFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    AssociateMulticastGroupWithFuotaTaskResponse(const AssociateMulticastGroupWithFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateMulticastGroupWithFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMulticastGroupWithFuotaTaskResponse)
    Q_DISABLE_COPY(AssociateMulticastGroupWithFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
