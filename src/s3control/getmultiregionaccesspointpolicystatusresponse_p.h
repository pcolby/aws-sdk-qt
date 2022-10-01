// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMULTIREGIONACCESSPOINTPOLICYSTATUSRESPONSE_P_H
#define QTAWS_GETMULTIREGIONACCESSPOINTPOLICYSTATUSRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetMultiRegionAccessPointPolicyStatusResponse;

class GetMultiRegionAccessPointPolicyStatusResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetMultiRegionAccessPointPolicyStatusResponsePrivate(GetMultiRegionAccessPointPolicyStatusResponse * const q);

    void parseGetMultiRegionAccessPointPolicyStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMultiRegionAccessPointPolicyStatusResponse)
    Q_DISABLE_COPY(GetMultiRegionAccessPointPolicyStatusResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
