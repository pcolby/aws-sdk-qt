// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOINTFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_CREATEACCESSPOINTFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class CreateAccessPointForObjectLambdaResponse;

class CreateAccessPointForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit CreateAccessPointForObjectLambdaResponsePrivate(CreateAccessPointForObjectLambdaResponse * const q);

    void parseCreateAccessPointForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccessPointForObjectLambdaResponse)
    Q_DISABLE_COPY(CreateAccessPointForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
