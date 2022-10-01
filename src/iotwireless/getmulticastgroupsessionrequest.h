// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTICASTGROUPSESSIONREQUEST_H
#define QTAWS_GETMULTICASTGROUPSESSIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetMulticastGroupSessionRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetMulticastGroupSessionRequest : public IoTWirelessRequest {

public:
    GetMulticastGroupSessionRequest(const GetMulticastGroupSessionRequest &other);
    GetMulticastGroupSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMulticastGroupSessionRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
