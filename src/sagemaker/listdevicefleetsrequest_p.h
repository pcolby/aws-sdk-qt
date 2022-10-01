// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEFLEETSREQUEST_P_H
#define QTAWS_LISTDEVICEFLEETSREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "listdevicefleetsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListDeviceFleetsRequest;

class ListDeviceFleetsRequestPrivate : public SageMakerRequestPrivate {

public:
    ListDeviceFleetsRequestPrivate(const SageMakerRequest::Action action,
                                   ListDeviceFleetsRequest * const q);
    ListDeviceFleetsRequestPrivate(const ListDeviceFleetsRequestPrivate &other,
                                   ListDeviceFleetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeviceFleetsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
