// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTPOLICYRESPONSE_H
#define QTAWS_GETMULTIREGIONACCESSPOINTPOLICYRESPONSE_H

#include "s3controlresponse.h"
#include "getmultiregionaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointPolicyResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetMultiRegionAccessPointPolicyResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetMultiRegionAccessPointPolicyResponse(const GetMultiRegionAccessPointPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMultiRegionAccessPointPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMultiRegionAccessPointPolicyResponse)
    Q_DISABLE_COPY(GetMultiRegionAccessPointPolicyResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
