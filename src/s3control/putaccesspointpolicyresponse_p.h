// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTPOLICYRESPONSE_P_H
#define QTAWS_PUTACCESSPOINTPOLICYRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointPolicyResponse;

class PutAccessPointPolicyResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit PutAccessPointPolicyResponsePrivate(PutAccessPointPolicyResponse * const q);

    void parsePutAccessPointPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccessPointPolicyResponse)
    Q_DISABLE_COPY(PutAccessPointPolicyResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
