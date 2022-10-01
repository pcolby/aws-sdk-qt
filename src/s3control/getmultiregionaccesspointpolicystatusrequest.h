// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTPOLICYSTATUSREQUEST_H
#define QTAWS_GETMULTIREGIONACCESSPOINTPOLICYSTATUSREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointPolicyStatusRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetMultiRegionAccessPointPolicyStatusRequest : public S3ControlRequest {

public:
    GetMultiRegionAccessPointPolicyStatusRequest(const GetMultiRegionAccessPointPolicyStatusRequest &other);
    GetMultiRegionAccessPointPolicyStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMultiRegionAccessPointPolicyStatusRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
