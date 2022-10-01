// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTICASTGROUPRESPONSE_H
#define QTAWS_CREATEMULTICASTGROUPRESPONSE_H

#include "iotwirelessresponse.h"
#include "createmulticastgrouprequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateMulticastGroupResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateMulticastGroupResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateMulticastGroupResponse(const CreateMulticastGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMulticastGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMulticastGroupResponse)
    Q_DISABLE_COPY(CreateMulticastGroupResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
