// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEPRIMARYTASKSETREQUEST_P_H
#define QTAWS_UPDATESERVICEPRIMARYTASKSETREQUEST_P_H

#include "ecsrequest_p.h"
#include "updateserviceprimarytasksetrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateServicePrimaryTaskSetRequest;

class UpdateServicePrimaryTaskSetRequestPrivate : public EcsRequestPrivate {

public:
    UpdateServicePrimaryTaskSetRequestPrivate(const EcsRequest::Action action,
                                   UpdateServicePrimaryTaskSetRequest * const q);
    UpdateServicePrimaryTaskSetRequestPrivate(const UpdateServicePrimaryTaskSetRequestPrivate &other,
                                   UpdateServicePrimaryTaskSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServicePrimaryTaskSetRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
