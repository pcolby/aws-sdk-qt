// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINCONFIGURATIONREQUEST_H
#define QTAWS_CREATEDOMAINCONFIGURATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class CreateDomainConfigurationRequestPrivate;

class QTAWSIOT_EXPORT CreateDomainConfigurationRequest : public IoTRequest {

public:
    CreateDomainConfigurationRequest(const CreateDomainConfigurationRequest &other);
    CreateDomainConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDomainConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
