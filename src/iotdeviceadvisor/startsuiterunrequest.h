// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSUITERUNREQUEST_H
#define QTAWS_STARTSUITERUNREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class StartSuiteRunRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT StartSuiteRunRequest : public IotDeviceAdvisorRequest {

public:
    StartSuiteRunRequest(const StartSuiteRunRequest &other);
    StartSuiteRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartSuiteRunRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
