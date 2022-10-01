// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_CREATEAPPINSTANCEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "createappinstanceuserrequest.h"

namespace QtAws {
namespace Chime {

class CreateAppInstanceUserRequest;

class CreateAppInstanceUserRequestPrivate : public ChimeRequestPrivate {

public:
    CreateAppInstanceUserRequestPrivate(const ChimeRequest::Action action,
                                   CreateAppInstanceUserRequest * const q);
    CreateAppInstanceUserRequestPrivate(const CreateAppInstanceUserRequestPrivate &other,
                                   CreateAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
