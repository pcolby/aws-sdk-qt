// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOINTSFOROBJECTLAMBDARESPONSE_P_H
#define QTAWS_LISTACCESSPOINTSFOROBJECTLAMBDARESPONSE_P_H

#include "s3controlresponse_p.h"

namespace QtAws {
namespace S3Control {

class ListAccessPointsForObjectLambdaResponse;

class ListAccessPointsForObjectLambdaResponsePrivate : public S3ControlResponsePrivate {

public:

    explicit ListAccessPointsForObjectLambdaResponsePrivate(ListAccessPointsForObjectLambdaResponse * const q);

    void parseListAccessPointsForObjectLambdaResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAccessPointsForObjectLambdaResponse)
    Q_DISABLE_COPY(ListAccessPointsForObjectLambdaResponsePrivate)

};

} // namespace S3Control
} // namespace QtAws

#endif
