// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMULTICASTGROUPSESSIONREQUEST_H
#define QTAWS_STARTMULTICASTGROUPSESSIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class StartMulticastGroupSessionRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT StartMulticastGroupSessionRequest : public IoTWirelessRequest {

public:
    StartMulticastGroupSessionRequest(const StartMulticastGroupSessionRequest &other);
    StartMulticastGroupSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMulticastGroupSessionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
