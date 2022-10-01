// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTREQUEST_H
#define QTAWS_DELETEACCESSPOINTREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointRequestPrivate;

class QTAWSS3CONTROL_EXPORT DeleteAccessPointRequest : public S3ControlRequest {

public:
    DeleteAccessPointRequest(const DeleteAccessPointRequest &other);
    DeleteAccessPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
