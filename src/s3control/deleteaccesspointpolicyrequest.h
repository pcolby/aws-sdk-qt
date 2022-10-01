// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTPOLICYREQUEST_H
#define QTAWS_DELETEACCESSPOINTPOLICYREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointPolicyRequestPrivate;

class QTAWSS3CONTROL_EXPORT DeleteAccessPointPolicyRequest : public S3ControlRequest {

public:
    DeleteAccessPointPolicyRequest(const DeleteAccessPointPolicyRequest &other);
    DeleteAccessPointPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPointPolicyRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
