// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSUITEDEFINITIONSREQUEST_H
#define QTAWS_LISTSUITEDEFINITIONSREQUEST_H

#include "iotdeviceadvisorrequest.h"

namespace QtAws {
namespace IotDeviceAdvisor {

class ListSuiteDefinitionsRequestPrivate;

class QTAWSIOTDEVICEADVISOR_EXPORT ListSuiteDefinitionsRequest : public IotDeviceAdvisorRequest {

public:
    ListSuiteDefinitionsRequest(const ListSuiteDefinitionsRequest &other);
    ListSuiteDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSuiteDefinitionsRequest)

};

} // namespace IotDeviceAdvisor
} // namespace QtAws

#endif
