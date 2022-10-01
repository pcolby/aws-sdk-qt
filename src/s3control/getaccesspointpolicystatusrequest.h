// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYSTATUSREQUEST_H
#define QTAWS_GETACCESSPOINTPOLICYSTATUSREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyStatusRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointPolicyStatusRequest : public S3ControlRequest {

public:
    GetAccessPointPolicyStatusRequest(const GetAccessPointPolicyStatusRequest &other);
    GetAccessPointPolicyStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointPolicyStatusRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
