// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICEPROFILEREQUEST_H
#define QTAWS_CREATESERVICEPROFILEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateServiceProfileRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT CreateServiceProfileRequest : public IoTWirelessRequest {

public:
    CreateServiceProfileRequest(const CreateServiceProfileRequest &other);
    CreateServiceProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceProfileRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
