// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYSTATUSRESPONSE_H
#define QTAWS_GETACCESSPOINTPOLICYSTATUSRESPONSE_H

#include "s3controlresponse.h"
#include "getaccesspointpolicystatusrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyStatusResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointPolicyStatusResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetAccessPointPolicyStatusResponse(const GetAccessPointPolicyStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccessPointPolicyStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointPolicyStatusResponse)
    Q_DISABLE_COPY(GetAccessPointPolicyStatusResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
