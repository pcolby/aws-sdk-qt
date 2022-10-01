// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOINTFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_DELETEACCESSPOINTFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class DeleteAccessPointForObjectLambdaResponse;

class DeleteAccessPointForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit DeleteAccessPointForObjectLambdaResponsePrivate(DeleteAccessPointForObjectLambdaResponse * const q);

    void parseDeleteAccessPointForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPointForObjectLambdaResponse)
    Q_DISABLE_COPY(DeleteAccessPointForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
