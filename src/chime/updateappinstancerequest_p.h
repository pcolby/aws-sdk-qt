// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEREQUEST_P_H
#define QTAWS_UPDATEAPPINSTANCEREQUEST_P_H

#include "chimerequest_p.h"
#include "updateappinstancerequest.h"

namespace QtAws {
namespace Chime {

class UpdateAppInstanceRequest;

class UpdateAppInstanceRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateAppInstanceRequestPrivate(const ChimeRequest::Action action,
                                   UpdateAppInstanceRequest * const q);
    UpdateAppInstanceRequestPrivate(const UpdateAppInstanceRequestPrivate &other,
                                   UpdateAppInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppInstanceRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
