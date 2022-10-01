// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOINTSFOROBJECTLAMBDAREQUEST_P_H
#define QTAWS_LISTACCESSPOINTSFOROBJECTLAMBDAREQUEST_P_H

#include "s3controlrequest_p.h"
#include "listaccesspointsforobjectlambdarequest.h"

namespace QtAws {
namespace S3Control {

class ListAccessPointsForObjectLambdaRequest;

class ListAccessPointsForObjectLambdaRequestPrivate : public S3ControlRequestPrivate {

public:
    ListAccessPointsForObjectLambdaRequestPrivate(const S3ControlRequest::Action action,
                                   ListAccessPointsForObjectLambdaRequest * const q);
    ListAccessPointsForObjectLambdaRequestPrivate(const ListAccessPointsForObjectLambdaRequestPrivate &other,
                                   ListAccessPointsForObjectLambdaRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessPointsForObjectLambdaRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
