// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITERUNREQUEST_H
#define QTAWS_GETSUITERUNREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class GetSuiteRunRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT GetSuiteRunRequest : public IotDeviceAdvisorRequest {

public:
    GetSuiteRunRequest(const GetSuiteRunRequest &other);
    GetSuiteRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuiteRunRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
