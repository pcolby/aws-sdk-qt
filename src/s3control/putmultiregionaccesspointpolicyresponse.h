// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYRESPONSE_H
#define QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYRESPONSE_H

#include "s3controlresponse.h"
#include "putmultiregionaccesspointpolicyrequest.h"

namespace QtAws {
namespace S3Control {

class PutMultiRegionAccessPointPolicyResponsePrivate;

class QTAWSS3CONTROL_EXPORT PutMultiRegionAccessPointPolicyResponse : public S3ControlResponse {
    Q_OBJECT

public:
    PutMultiRegionAccessPointPolicyResponse(const PutMultiRegionAccessPointPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutMultiRegionAccessPointPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMultiRegionAccessPointPolicyResponse)
    Q_DISABLE_COPY(PutMultiRegionAccessPointPolicyResponse)

};

} // namespace S3Control
} // namespace QtAws

#endif
