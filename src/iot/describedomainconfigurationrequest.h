// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEDOMAINCONFIGURATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeDomainConfigurationRequestPrivate;

class QTAWSIOT_EXPORT DescribeDomainConfigurationRequest : public IoTRequest {

public:
    DescribeDomainConfigurationRequest(const DescribeDomainConfigurationRequest &other);
    DescribeDomainConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
