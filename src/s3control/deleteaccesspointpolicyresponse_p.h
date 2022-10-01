// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTPOLICYRESPONSE_P_H
#define QTAWS_DELETEACCESSPOINTPOLICYRESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointPolicyResponse;

class DeleteAccessPointPolicyResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteAccessPointPolicyResponsePrivate(DeleteAccessPointPolicyResponse * const q);

    void parseDeleteAccessPointPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPointPolicyResponse)
    Q_DISABLE_COPY(DeleteAccessPointPolicyResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
