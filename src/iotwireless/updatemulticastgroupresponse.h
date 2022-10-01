// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMULTICASTGROUPRESPONSE_H
#define QTAWS_UPDATEMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "updatemulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    UpdateMulticastGroupResponse(const UpdateMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMulticastGroupResponse)
    Q_DISABLE_COPY(UpdateMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
