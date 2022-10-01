// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITERUNSREQUEST_H
#define QTAWS_LISTSUITERUNSREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class ListSuiteRunsRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT ListSuiteRunsRequest : public IotDeviceAdvisorRequest {

public:
    ListSuiteRunsRequest(const ListSuiteRunsRequest &other);
    ListSuiteRunsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuiteRunsRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
