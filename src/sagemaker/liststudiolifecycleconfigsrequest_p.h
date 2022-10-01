// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTUDIOLIFECYCLECONFIGSREQUEST_P_H
#define QTAWS_LISTSTUDIOLIFECYCLECONFIGSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "liststudiolifecycleconfigsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListStudioLifecycleConfigsRequest;

class ListStudioLifecycleConfigsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListStudioLifecycleConfigsRequestPrivate(const SageMakerRequest::Action action,
                                   ListStudioLifecycleConfigsRequest * const q);
    ListStudioLifecycleConfigsRequestPrivate(const ListStudioLifecycleConfigsRequestPrivate &other,
                                   ListStudioLifecycleConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStudioLifecycleConfigsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
