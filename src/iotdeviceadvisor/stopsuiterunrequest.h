// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSUITERUNREQUEST_H
#define QTAWS_STOPSUITERUNREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class StopSuiteRunRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT StopSuiteRunRequest : public IotDeviceAdvisorRequest {

public:
    StopSuiteRunRequest(const StopSuiteRunRequest &other);
    StopSuiteRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopSuiteRunRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
