// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEREQUESTSTATUSREQUEST_H
#define QTAWS_GETRESOURCEREQUESTSTATUSREQUEST_H

#include "cloudcontrolrequest.h"

namespace QtAws {
namespace CloudControl {

class GetResourceRequestStatusRequestPrivate;

class QTAWSCLOUDCONTROL_EXPORT GetResourceRequestStatusRequest : public CloudControlRequest {

public:
    GetResourceRequestStatusRequest(const GetResourceRequestStatusRequest &other);
    GetResourceRequestStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceRequestStatusRequest)

};

} // namespace CloudControl
} // namespace QtAws

#endif
