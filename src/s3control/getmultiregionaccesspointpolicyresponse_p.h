// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTPOLICYRESPONSE_P_H
#define QTAWS_GETMULTIREGIONACCESSPOINTPOLICYRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointPolicyResponse;

class GetMultiRegionAccessPointPolicyResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetMultiRegionAccessPointPolicyResponsePrivate(GetMultiRegionAccessPointPolicyResponse * const q);

    void parseGetMultiRegionAccessPointPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMultiRegionAccessPointPolicyResponse)
    Q_DISABLE_COPY(GetMultiRegionAccessPointPolicyResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
