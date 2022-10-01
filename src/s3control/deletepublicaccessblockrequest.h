// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICACCESSBLOCKREQUEST_H
#define QTAWS_DELETEPUBLICACCESSBLOCKREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class DeletePublicAccessBlockRequestPrivate;

class QTAWSS3CONTROL_EXPORT DeletePublicAccessBlockRequest : public S3ControlRequest {

public:
    DeletePublicAccessBlockRequest(const DeletePublicAccessBlockRequest &other);
    DeletePublicAccessBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePublicAccessBlockRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
