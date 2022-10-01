// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYSTATUSFOROBJECTLAMBDAREQUEST_H
#define QTAWS_GETACCESSPOINTPOLICYSTATUSFOROBJECTLAMBDAREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyStatusForObjectLambdaRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointPolicyStatusForObjectLambdaRequest : public S3ControlRequest {

public:
    GetAccessPointPolicyStatusForObjectLambdaRequest(const GetAccessPointPolicyStatusForObjectLambdaRequest &other);
    GetAccessPointPolicyStatusForObjectLambdaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointPolicyStatusForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
