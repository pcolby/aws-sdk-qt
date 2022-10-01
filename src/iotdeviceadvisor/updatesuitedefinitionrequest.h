// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUITEDEFINITIONREQUEST_H
#define QTAWS_UPDATESUITEDEFINITIONREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class UpdateSuiteDefinitionRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT UpdateSuiteDefinitionRequest : public IotDeviceAdvisorRequest {

public:
    UpdateSuiteDefinitionRequest(const UpdateSuiteDefinitionRequest &other);
    UpdateSuiteDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSuiteDefinitionRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
