// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDOMAINCONFIGURATIONREQUEST_H
#define QTAWS_DELETEDOMAINCONFIGURATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DeleteDomainConfigurationRequestPrivate;

class QTAWSIOT_EXPORT DeleteDomainConfigurationRequest : public IoTRequest {

public:
    DeleteDomainConfigurationRequest(const DeleteDomainConfigurationRequest &other);
    DeleteDomainConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDomainConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
