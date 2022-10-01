// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDESTINATIONREQUEST_H
#define QTAWS_GETDESTINATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetDestinationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetDestinationRequest : public IoTWirelessRequest {

public:
    GetDestinationRequest(const GetDestinationRequest &other);
    GetDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDestinationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
