// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMULTICASTGROUPSESSIONRESPONSE_H
#define QTAWS_CANCELMULTICASTGROUPSESSIONRESPONSE_H

#include "iotwirelessresponse.h"
#include "cancelmulticastgroupsessionrequest.h"

namespace QtAws {
namespace IoTWireless {

class CancelMulticastGroupSessionResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CancelMulticastGroupSessionResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CancelMulticastGroupSessionResponse(const CancelMulticastGroupSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelMulticastGroupSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelMulticastGroupSessionResponse)
    Q_DISABLE_COPY(CancelMulticastGroupSessionResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
