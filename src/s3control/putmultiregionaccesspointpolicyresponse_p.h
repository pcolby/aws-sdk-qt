// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYRESPONSE_P_H
#define QTAWS_PUTMULTIREGIONACCESSPOINTPOLICYRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class PutMultiRegionAccessPointPolicyResponse;

class PutMultiRegionAccessPointPolicyResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit PutMultiRegionAccessPointPolicyResponsePrivate(PutMultiRegionAccessPointPolicyResponse * const q);

    void parsePutMultiRegionAccessPointPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMultiRegionAccessPointPolicyResponse)
    Q_DISABLE_COPY(PutMultiRegionAccessPointPolicyResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
