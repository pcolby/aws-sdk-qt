// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITEDEFINITIONREQUEST_H
#define QTAWS_GETSUITEDEFINITIONREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteDefinitionRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT GetSuiteDefinitionRequest : public IotDeviceAdvisorRequest {

public:
    GetSuiteDefinitionRequest(const GetSuiteDefinitionRequest &other);
    GetSuiteDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuiteDefinitionRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
