// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICACCESSBLOCKREQUEST_H
#define QTAWS_GETPUBLICACCESSBLOCKREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetPublicAccessBlockRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetPublicAccessBlockRequest : public S3ControlRequest {

public:
    GetPublicAccessBlockRequest(const GetPublicAccessBlockRequest &other);
    GetPublicAccessBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPublicAccessBlockRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
