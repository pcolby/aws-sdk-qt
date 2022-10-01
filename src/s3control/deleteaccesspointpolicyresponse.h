// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTPOLICYRESPONSE_H
#define QTAWS_DELETEACCESSPOINTPOLICYRESPONSE_H

#include "s3controlresponse.h"
#include "deleteaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointPolicyResponsePrivate;

class QTAWSS3CONTROL_EXPORT DeleteAccessPointPolicyResponse : public S3ControlResponse {
    Q_OBJECT

public:
    DeleteAccessPointPolicyResponse(const DeleteAccessPointPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccessPointPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPointPolicyResponse)
    Q_DISABLE_COPY(DeleteAccessPointPolicyResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
