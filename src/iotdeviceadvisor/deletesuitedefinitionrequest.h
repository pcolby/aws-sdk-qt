// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUITEDEFINITIONREQUEST_H
#define QTAWS_DELETESUITEDEFINITIONREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class DeleteSuiteDefinitionRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT DeleteSuiteDefinitionRequest : public IotDeviceAdvisorRequest {

public:
    DeleteSuiteDefinitionRequest(const DeleteSuiteDefinitionRequest &other);
    DeleteSuiteDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSuiteDefinitionRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
