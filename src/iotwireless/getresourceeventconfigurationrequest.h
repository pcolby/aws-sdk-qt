// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEEVENTCONFIGURATIONREQUEST_H
#define QTAWS_GETRESOURCEEVENTCONFIGURATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetResourceEventConfigurationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetResourceEventConfigurationRequest : public IoTWirelessRequest {

public:
    GetResourceEventConfigurationRequest(const GetResourceEventConfigurationRequest &other);
    GetResourceEventConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceEventConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
