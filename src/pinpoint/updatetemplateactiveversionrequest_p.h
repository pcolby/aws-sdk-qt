// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEACTIVEVERSIONREQUEST_P_H
#define QTAWS_UPDATETEMPLATEACTIVEVERSIONREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatetemplateactiveversionrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateTemplateActiveVersionRequest;

class UpdateTemplateActiveVersionRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateTemplateActiveVersionRequestPrivate(const PinpointRequest::Action action,
                                   UpdateTemplateActiveVersionRequest * const q);
    UpdateTemplateActiveVersionRequestPrivate(const UpdateTemplateActiveVersionRequestPrivate &other,
                                   UpdateTemplateActiveVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateActiveVersionRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
