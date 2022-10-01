// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTCONFIGSREQUEST_P_H
#define QTAWS_LISTENDPOINTCONFIGSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listendpointconfigsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListEndpointConfigsRequest;

class ListEndpointConfigsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListEndpointConfigsRequestPrivate(const SageMakerRequest::Action action,
                                   ListEndpointConfigsRequest * const q);
    ListEndpointConfigsRequestPrivate(const ListEndpointConfigsRequestPrivate &other,
                                   ListEndpointConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEndpointConfigsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
