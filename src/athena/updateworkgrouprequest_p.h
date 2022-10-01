// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKGROUPREQUEST_P_H
#define QTAWS_UPDATEWORKGROUPREQUEST_P_H

#include "athenarequest_p.h"
#include "updateworkgrouprequest.h"

namespace QtAws {
namespace Athena {

class UpdateWorkGroupRequest;

class UpdateWorkGroupRequestPrivate : public AthenaRequestPrivate {

public:
    UpdateWorkGroupRequestPrivate(const AthenaRequest::Action action,
                                   UpdateWorkGroupRequest * const q);
    UpdateWorkGroupRequestPrivate(const UpdateWorkGroupRequestPrivate &other,
                                   UpdateWorkGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkGroupRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
