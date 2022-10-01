// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYLINEAGEREQUEST_P_H
#define QTAWS_QUERYLINEAGEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "querylineagerequest.h"

namespace QtAws {
namespace SageMaker {

class QueryLineageRequest;

class QueryLineageRequestPrivate : public SageMakerRequestPrivate {

public:
    QueryLineageRequestPrivate(const SageMakerRequest::Action action,
                                   QueryLineageRequest * const q);
    QueryLineageRequestPrivate(const QueryLineageRequestPrivate &other,
                                   QueryLineageRequest * const q);

private:
    Q_DECLARE_PUBLIC(QueryLineageRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
