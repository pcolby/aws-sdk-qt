// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYREQUEST_H
#define QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class PutMultiRegionAccessPointPolicyRequestPrivate;

class QTAWSS3CONTROL_EXPORT PutMultiRegionAccessPointPolicyRequest : public S3ControlRequest {

public:
    PutMultiRegionAccessPointPolicyRequest(const PutMultiRegionAccessPointPolicyRequest &other);
    PutMultiRegionAccessPointPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMultiRegionAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
