// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYRESPONSE_P_H
#define QTAWS_GETACCESSPOINTPOLICYRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyResponse;

class GetAccessPointPolicyResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetAccessPointPolicyResponsePrivate(GetAccessPointPolicyResponse * const q);

    void parseGetAccessPointPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessPointPolicyResponse)
    Q_DISABLE_COPY(GetAccessPointPolicyResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
