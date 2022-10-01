// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTPOLICYREQUEST_H
#define QTAWS_PUTACCESSPOINTPOLICYREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointPolicyRequestPrivate;

class QTAWSS3CONTROL_EXPORT PutAccessPointPolicyRequest : public S3ControlRequest {

public:
    PutAccessPointPolicyRequest(const PutAccessPointPolicyRequest &other);
    PutAccessPointPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
