// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTCONFIGURATIONFOROBJECTLAMBDAREQUEST_H
#define QTAWS_GETACCESSPOINTCONFIGURATIONFOROBJECTLAMBDAREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointConfigurationForObjectLambdaRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointConfigurationForObjectLambdaRequest : public S3ControlRequest {

public:
    GetAccessPointConfigurationForObjectLambdaRequest(const GetAccessPointConfigurationForObjectLambdaRequest &other);
    GetAccessPointConfigurationForObjectLambdaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointConfigurationForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
