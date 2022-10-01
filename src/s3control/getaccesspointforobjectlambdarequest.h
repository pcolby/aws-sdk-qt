// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTFOROBJECTLAMBDAREQUEST_H
#define QTAWS_GETACCESSPOINTFOROBJECTLAMBDAREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointForObjectLambdaRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointForObjectLambdaRequest : public S3ControlRequest {

public:
    GetAccessPointForObjectLambdaRequest(const GetAccessPointForObjectLambdaRequest &other);
    GetAccessPointForObjectLambdaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
