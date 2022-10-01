// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMULTICASTGROUPSBYFUOTATASKRESPONSE_H
#define QTAWS_LISTMULTICASTGROUPSBYFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "listmulticastgroupsbyfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListMulticastGroupsByFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListMulticastGroupsByFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListMulticastGroupsByFuotaTaskResponse(const ListMulticastGroupsByFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMulticastGroupsByFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMulticastGroupsByFuotaTaskResponse)
    Q_DISABLE_COPY(ListMulticastGroupsByFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
