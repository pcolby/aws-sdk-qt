// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEPROFILEREQUEST_H
#define QTAWS_GETSERVICEPROFILEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetServiceProfileRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetServiceProfileRequest : public IoTWirelessRequest {

public:
    GetServiceProfileRequest(const GetServiceProfileRequest &other);
    GetServiceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServiceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
