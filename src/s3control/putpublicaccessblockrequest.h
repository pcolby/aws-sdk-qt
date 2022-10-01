// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPUBLICACCESSBLOCKREQUEST_H
#define QTAWS_PUTPUBLICACCESSBLOCKREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class PutPublicAccessBlockRequestPrivate;

class QTAWSS3CONTROL_EXPORT PutPublicAccessBlockRequest : public S3ControlRequest {

public:
    PutPublicAccessBlockRequest(const PutPublicAccessBlockRequest &other);
    PutPublicAccessBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPublicAccessBlockRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
