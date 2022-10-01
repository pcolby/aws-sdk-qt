// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGEDEVICESREQUEST_P_H
#define QTAWS_LISTSTAGEDEVICESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "liststagedevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class ListStageDevicesRequest;

class ListStageDevicesRequestPrivate : public SageMakerRequestPrivate {

public:
    ListStageDevicesRequestPrivate(const SageMakerRequest::Action action,
                                   ListStageDevicesRequest * const q);
    ListStageDevicesRequestPrivate(const ListStageDevicesRequestPrivate &other,
                                   ListStageDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListStageDevicesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
