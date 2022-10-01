// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCESHAREREQUEST_P_H
#define QTAWS_UPDATERESOURCESHAREREQUEST_P_H

#include "ramrequest_p.h"
#include "updateresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class UpdateResourceShareRequest;

class UpdateResourceShareRequestPrivate : public RamRequestPrivate {

public:
    UpdateResourceShareRequestPrivate(const RamRequest::Action action,
                                   UpdateResourceShareRequest * const q);
    UpdateResourceShareRequestPrivate(const UpdateResourceShareRequestPrivate &other,
                                   UpdateResourceShareRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
