// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTPOLICYSTATUSRESPONSE_H
#define QTAWS_GETMULTIREGIONACCESSPOINTPOLICYSTATUSRESPONSE_H

#include "s3controlresponse.h"
#include "getmultiregionaccesspointpolicystatusrequest.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointPolicyStatusResponsePrivate;

class QTAWSS3CONTROL_EXPORT GetMultiRegionAccessPointPolicyStatusResponse : public S3ControlResponse {
    Q_OBJECT

public:
    GetMultiRegionAccessPointPolicyStatusResponse(const GetMultiRegionAccessPointPolicyStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMultiRegionAccessPointPolicyStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMultiRegionAccessPointPolicyStatusResponse)
    Q_DISABLE_COPY(GetMultiRegionAccessPointPolicyStatusResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
