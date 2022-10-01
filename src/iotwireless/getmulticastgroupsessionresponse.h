// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTICASTGROUPSESSIONRESPONSE_H
#define QTAWS_GETMULTICASTGROUPSESSIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "getmulticastgroupsessionrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetMulticastGroupSessionResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetMulticastGroupSessionResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetMulticastGroupSessionResponse(const GetMulticastGroupSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMulticastGroupSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMulticastGroupSessionResponse)
    Q_DISABLE_COPY(GetMulticastGroupSessionResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
