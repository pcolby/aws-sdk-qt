// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPOSITIONCONFIGURATIONREQUEST_H
#define QTAWS_GETPOSITIONCONFIGURATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetPositionConfigurationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetPositionConfigurationRequest : public IoTWirelessRequest {

public:
    GetPositionConfigurationRequest(const GetPositionConfigurationRequest &other);
    GetPositionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPositionConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
