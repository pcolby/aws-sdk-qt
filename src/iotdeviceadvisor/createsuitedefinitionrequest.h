// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUITEDEFINITIONREQUEST_H
#define QTAWS_CREATESUITEDEFINITIONREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class CreateSuiteDefinitionRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT CreateSuiteDefinitionRequest : public IotDeviceAdvisorRequest {

public:
    CreateSuiteDefinitionRequest(const CreateSuiteDefinitionRequest &other);
    CreateSuiteDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSuiteDefinitionRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
