// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPIMAGECONFIGSREQUEST_P_H
#define QTAWS_LISTAPPIMAGECONFIGSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listappimageconfigsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAppImageConfigsRequest;

class ListAppImageConfigsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListAppImageConfigsRequestPrivate(const SageMakerRequest::Action action,
                                   ListAppImageConfigsRequest * const q);
    ListAppImageConfigsRequestPrivate(const ListAppImageConfigsRequestPrivate &other,
                                   ListAppImageConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppImageConfigsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
