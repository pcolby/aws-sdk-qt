// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMULTICASTGROUPSESSIONRESPONSE_H
#define QTAWS_STARTMULTICASTGROUPSESSIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "startmulticastgroupsessionrequest.h"

namespace QtAws {
namespace IoTWireless {

class StartMulticastGroupSessionResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT StartMulticastGroupSessionResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    StartMulticastGroupSessionResponse(const StartMulticastGroupSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMulticastGroupSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMulticastGroupSessionResponse)
    Q_DISABLE_COPY(StartMulticastGroupSessionResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
