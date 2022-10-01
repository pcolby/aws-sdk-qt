// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEEVENTCONFIGURATIONREQUEST_H
#define QTAWS_UPDATERESOURCEEVENTCONFIGURATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateResourceEventConfigurationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateResourceEventConfigurationRequest : public IoTWirelessRequest {

public:
    UpdateResourceEventConfigurationRequest(const UpdateResourceEventConfigurationRequest &other);
    UpdateResourceEventConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateResourceEventConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
