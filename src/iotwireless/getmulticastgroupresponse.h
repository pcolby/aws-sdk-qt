// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTICASTGROUPRESPONSE_H
#define QTAWS_GETMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "getmulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class GetMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetMulticastGroupResponse(const GetMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMulticastGroupResponse)
    Q_DISABLE_COPY(GetMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
