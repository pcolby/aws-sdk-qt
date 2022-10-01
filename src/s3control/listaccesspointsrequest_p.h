// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCESSPOINTSREQUEST_P_H
#define QTAWS_LISTACCESSPOINTSREQUEST_P_H

#include "s3controlrequest_p.h"
#include "listaccesspointsrequest.h"

namespace QtAws {
namespace S3Control {

class ListAccessPointsRequest;

class ListAccessPointsRequestPrivate : public S3ControlRequestPrivate {

public:
    ListAccessPointsRequestPrivate(const S3ControlRequest::Action action,
                                   ListAccessPointsRequest * const q);
    ListAccessPointsRequestPrivate(const ListAccessPointsRequestPrivate &other,
                                   ListAccessPointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccessPointsRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
