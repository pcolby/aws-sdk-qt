// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTPOLICYSTATUSRESPONSE_P_H
#define QTAWS_GETACCESSPOINTPOLICYSTATUSRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointPolicyStatusResponse;

class GetAccessPointPolicyStatusResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit GetAccessPointPolicyStatusResponsePrivate(GetAccessPointPolicyStatusResponse * const q);

    void parseGetAccessPointPolicyStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccessPointPolicyStatusResponse)
    Q_DISABLE_COPY(GetAccessPointPolicyStatusResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
