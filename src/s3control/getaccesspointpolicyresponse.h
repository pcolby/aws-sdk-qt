// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYRESPONSE_H
#define QTAWS_GETACCESSPOINTPOLICYRESPONSE_H

#include "s3controlresponse.h"
#include "getaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointPolicyResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetAccessPointPolicyResponse(const GetAccessPointPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessPointPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointPolicyResponse)
    Q_DISABLE_COPY(GetAccessPointPolicyResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
