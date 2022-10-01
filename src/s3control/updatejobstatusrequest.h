// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBSTATUSREQUEST_H
#define QTAWS_UPDATEJOBSTATUSREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class UpdateJobStatusRequestPrivate;

class QTAWSS3CONTROL_EXPORT UpdateJobStatusRequest : public S3ControlRequest {

public:
    UpdateJobStatusRequest(const UpdateJobStatusRequest &other);
    UpdateJobStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobStatusRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
