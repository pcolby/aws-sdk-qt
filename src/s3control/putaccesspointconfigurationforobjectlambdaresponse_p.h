// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCESSPOINTCONFIGURATIONFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_PUTACCESSPOINTCONFIGURATIONFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class PutAccessPointConfigurationForObjectLambdaResponse;

class PutAccessPointConfigurationForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit PutAccessPointConfigurationForObjectLambdaResponsePrivate(PutAccessPointConfigurationForObjectLambdaResponse * const q);

    void parsePutAccessPointConfigurationForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutAccessPointConfigurationForObjectLambdaResponse)
    Q_DISABLE_COPY(PutAccessPointConfigurationForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
