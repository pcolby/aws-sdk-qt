// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPOSITIONCONFIGURATIONREQUEST_H
#define QTAWS_PUTPOSITIONCONFIGURATIONREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class PutPositionConfigurationRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT PutPositionConfigurationRequest : public IoTWirelessRequest {

public:
    PutPositionConfigurationRequest(const PutPositionConfigurationRequest &other);
    PutPositionConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPositionConfigurationRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
