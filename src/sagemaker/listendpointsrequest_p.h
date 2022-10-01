// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSREQUEST_P_H
#define QTAWS_LISTENDPOINTSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listendpointsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEndpointsRequest;

class ListEndpointsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListEndpointsRequestPrivate(const SageMakerRequest::Action action,
                                   ListEndpointsRequest * const q);
    ListEndpointsRequestPrivate(const ListEndpointsRequestPrivate &other,
                                   ListEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
