// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTPOLICYREQUEST_H
#define QTAWS_GETMULTIREGIONACCESSPOINTPOLICYREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointPolicyRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetMultiRegionAccessPointPolicyRequest : public S3ControlRequest {

public:
    GetMultiRegionAccessPointPolicyRequest(const GetMultiRegionAccessPointPolicyRequest &other);
    GetMultiRegionAccessPointPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMultiRegionAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
